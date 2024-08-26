function adaptive_pid_sfunc(block)
    setup(block);
    
%----------------------------------------------------------------------
function setup(block)
    % Register number of input and output ports
    block.NumInputPorts  = 1;
    block.NumOutputPorts = 1;
    
    % Input port properties
    block.InputPort(1).Dimensions  = 1;
    block.InputPort(1).DatatypeID  = 0; % double
    block.InputPort(1).Complexity  = 'Real';
    block.InputPort(1).DirectFeedthrough = true;
    
    % Output port properties
    block.OutputPort(1).Dimensions  = 1;
    block.OutputPort(1).DatatypeID  = 0; % double
    block.OutputPort(1).Complexity  = 'Real';
    
    % Register the parameters (PID gains and PSO parameters)
    block.NumDialogPrms     = 6; % Kp, Ki, Kd gains, PSO parameters
    block.DialogPrmsTunable = {'Nontunable', 'Nontunable', 'Nontunable', 'Nontunable', 'Nontunable', 'Nontunable'};
    
    % Register continuous sample time
    block.SampleTimes = [0.05, 0];
    
    % Setup Dwork
    block.NumContStates = 0;
    block.NumDworks = 0;
    
    % Set up the block methods
    block.RegBlockMethod('Outputs', @Outputs);
    
%----------------------------------------------------------------------
function Outputs(block)
    % Get the current error (difference between current heading and desired heading)
    error = block.InputPort(1).Data;
    
    % Get PID gains from dialog parameters
    Kp = block.DialogPrm(1).Data;
    Ki = block.DialogPrm(2).Data;
    Kd = block.DialogPrm(3).Data;
    
    % PSO parameters (assuming these are provided as dialog parameters)
    MaxDT = block.DialogPrm(4).Data;  % Maximum number of iterations
    c1 = block.DialogPrm(5).Data;     % PSO acceleration constants
    c2 = block.DialogPrm(6).Data;
    
    % PSO parameters
    N = 20; % Number of particles
    D = 3;  % Dimensionality of search space (Kp, Ki, Kd)
    Wmax = 0.9;
    Wmin = 0.4;
    Vmax = 5;
    Vmin = -5;
    Pmax = 30; % Adjust according to your system
    Pmin = -30; % Adjust according to your system
    
    % Initialize particle positions and velocities
    x = (Pmax - Pmin) * rand(N, D) + Pmin;
    v = (Vmax - Vmin) * rand(N, D) + Vmin;
    p = zeros(N, 1);
    y = x;
    Pg = zeros(1, D);
    
    % Initialize best particle positions
    for i = 1:N
        p(i) = compute_fitness(x(i, :), error); % Compute fitness (objective function)
    end
    
    % Initialize global best position
    [~, gbest_idx] = min(p);
    Pg = y(gbest_idx, :);
    
    % Perform PSO iterations
    for t = 1:MaxDT
        w = Wmax - (t - 1) * (Wmax - Wmin) / (MaxDT - 1);
        for i = 1:N
            v(i, :) = w * v(i, :) + c1 * rand * (y(i, :) - x(i, :)) + c2 * rand * (Pg - x(i, :));
            v(i, v(i, :) > Vmax) = Vmax;
            v(i, v(i, :) < Vmin) = Vmin;
            
            x(i, :) = x(i, :) + v(i, :);
            x(i, x(i, :) > Pmax) = Pmax;
            x(i, x(i, :) < Pmin) = Pmin;
            
            % Update particle's best position
            fitness = compute_fitness(x(i, :), error);
            if fitness < p(i)
                p(i) = fitness;
                y(i, :) = x(i, :);
            end
            
            % Update global best position
            [~, gbest_idx] = min(p);
            Pg = y(gbest_idx, :);
        end
    end
    
    % Output the best PID gains found by PSO
    Kp_best = Pg(1);
    Ki_best = Pg(2);
    Kd_best = Pg(3);
    
    % Calculate PID control signal using the best gains
    persistent integral prev_error;
    if isempty(integral)
        integral = 0;
    end
    if isempty(prev_error)
        prev_error = 0;
    end
    
    proportional = Kp_best * error;
    integral = integral + Ki_best * error * block.SampleTimes(1);
    derivative = Kd_best * (error - prev_error) / block.SampleTimes(1);
    
    output = proportional + integral + derivative;
    
    % Update previous error
    prev_error = error;
    
    % Limit the output to a reasonable range (adjust according to your system)
    output = max(min(output, 10), -10); % Limit output to [-10, 10]
    
    % Output the rudder control signal
    block.OutputPort(1).Data = output;
    
%----------------------------------------------------------------------
function fitness = compute_fitness(params, error)
    % This function computes the fitness (objective function) for PSO
    Kp = params(1);
    Ki = params(2);
    Kd = params(3);
    
    % Assuming fitness is the absolute value of the error weighted by PID gains
    fitness = abs(Kp * error) + abs(Ki * error) + abs(Kd * error);
