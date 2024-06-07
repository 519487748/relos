%��������������


% �������
L = 10; % ����
A = 1; % ���
T = 5; % ����
k = 2 * pi / L; % ����
omega = 2 * pi / T; % ��Ƶ��

% ����ʱ������
t = linspace(0, 20, 1000); % ����ʱ��

% ��ʼ��������λ�ú��ٶ�
robot_position = [0; 0]; % ��ʼλ�� (x, y)
robot_velocity = [0; 0]; % ��ʼ�ٶ� (vx, vy)

% �����˲���
mass = 10; % ����������
damping = 0.1; % ����ϵ��

% Ԥ��������洢λ��
positions = zeros(2, length(t));

% ��ѭ��
for i = 1:length(t)
    % ��ǰʱ��
    current_time = t(i);
    
    % �����ڵ�ǰʱ���λ�õ�Ӱ��
    wave_force_x = A * sin(k * robot_position(1) - omega * current_time);
    wave_force_y = A * cos(k * robot_position(2) - omega * current_time);
    
    % �������������躣����Ψһ��������
    total_force = [wave_force_x; wave_force_y] - damping * robot_velocity;
    
    % �����ٶȺ�λ�ã��򻯵�ŷ��������
    robot_velocity = robot_velocity + (total_force / mass) * (t(2) - t(1));
    robot_position = robot_position + robot_velocity * (t(2) - t(1));
    
    % �洢��ǰλ��
    positions(:, i) = robot_position;
end

% ���ƻ������˶��켣
figure;
plot(positions(1, :), positions(2, :));
title('ˮ�»������˶��켣');
xlabel('x λ��');
ylabel('y λ��');
grid on;
