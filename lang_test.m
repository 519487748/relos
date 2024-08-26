function [waveX, waveY, waveZ] = lang_test()
    % velocity0: 初始速度，单位 [m/s]，向量 [vx0, vy0, vz0]
    % waveAmplitude: 海浪振幅，单位 [m]，向量 [ax, ay, az]
    % waveFrequency: 海浪频率，单位 [Hz]，向量 [fx, fy, fz]
    % time: 仿真时间，单位 s
    % depth: 水下机器人的深度，单位 m
    % decayRate: 海浪影响随深度衰减的速率，推荐值为 0.5 到 1.0

    velocity0 =  [0.6, 0, 0];
    waveAmplitude =  [0.2, 0.3, 0.05];
    waveFrequency = [0.1, 0.15,  0.2];
    time = 470 ;
    
    decayRate = 0.85;
    
    
    % 时间步长
    dt = 0.05;
    t = 0:dt:time; % 仿真时间范围，步长为0.05秒
    z = t * 7 / 470;
    
    
    % 计算每个方向的海浪影响，考虑深度衰减
    waveX = waveAmplitude(1) * exp(-decayRate * z) .* sin(2 * pi * waveFrequency(1) * t);
    waveY = waveAmplitude(2) * exp(-decayRate * z) .* sin(2 * pi * waveFrequency(2) * t);
    waveZ = waveAmplitude(3) * exp(-decayRate * z) .* sin(2 * pi * waveFrequency(3) * t);

    % 绘制速度随时间的变化曲线
    figure;
    subplot(3,1,1);
    plot(t, waveX);
    xlabel('Time (s)');
    ylabel('waveX (m/s)');
    title('waveX of Underwater Robot under Wave Effect');
    grid on;

    subplot(3,1,2);
    plot(t, waveY);
    xlabel('Time (s)');
    ylabel('waveY (m/s)');
    title('waveY of Underwater Robot under Wave Effect');
    grid on;

    subplot(3,1,3);
    plot(t, waveZ);
    xlabel('Time (s)');
    ylabel('waveZ (m/s)');
    title('waveZ of Underwater Robot under Wave Effect');
    grid on;
    
    
end
