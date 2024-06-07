%海浪作用于推力


% 仿真参数
L = 10; % 波长
A = 1; % 振幅
T = 5; % 周期
k = 2 * pi / L; % 波数
omega = 2 * pi / T; % 角频率

% 创建时间向量
t = linspace(0, 20, 1000); % 仿真时间

% 初始化机器人位置和速度
robot_position = [0; 0]; % 初始位置 (x, y)
robot_velocity = [0; 0]; % 初始速度 (vx, vy)

% 机器人参数
mass = 10; % 机器人质量
damping = 0.1; % 阻尼系数

% 预分配数组存储位置
positions = zeros(2, length(t));

% 主循环
for i = 1:length(t)
    % 当前时间
    current_time = t(i);
    
    % 海浪在当前时间和位置的影响
    wave_force_x = A * sin(k * robot_position(1) - omega * current_time);
    wave_force_y = A * cos(k * robot_position(2) - omega * current_time);
    
    % 计算总力（假设海浪是唯一作用力）
    total_force = [wave_force_x; wave_force_y] - damping * robot_velocity;
    
    % 更新速度和位置（简化的欧拉方法）
    robot_velocity = robot_velocity + (total_force / mass) * (t(2) - t(1));
    robot_position = robot_position + robot_velocity * (t(2) - t(1));
    
    % 存储当前位置
    positions(:, i) = robot_position;
end

% 绘制机器人运动轨迹
figure;
plot(positions(1, :), positions(2, :));
title('水下机器人运动轨迹');
xlabel('x 位置');
ylabel('y 位置');
grid on;
