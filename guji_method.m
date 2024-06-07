% 1. 滑动窗口法（Moving Window Method）
% 滑动窗口法是一种常见的方法，用于估计一段时间内的最大值。通过维护一个固定长度的窗口，实时更新窗口内的最大值。
% MATLAB示例代码
windowSize = 10; % 窗口大小
data = []; % 用于存储滑动窗口内的实时数据
maxValue = -inf; % 初始最大值

for newValue = yourDataStream % 替换为你的数据流
    data = [data, newValue]; % 添加新数据到窗口
    if length(data) > windowSize
        data(1) = []; % 窗口滑动，移除最早的数据
    end
    maxValue = max(data); % 计算窗口内的最大值
    disp(['Current max value in window: ', num2str(maxValue)]);
end

% 2. 指数加权移动平均法（Exponential Moving Average）
% 使用指数加权移动平均法来估计最大值，这种方法对较新的数据赋予更高的权重。
% MATLAB示例代码
alpha = 0.1; % 平滑系数，取值范围在0到1之间
maxEstimate = -inf; % 初始最大估计值

for newValue = yourDataStream % 替换为你的数据流
    maxEstimate = max(maxEstimate, alpha * newValue + (1 - alpha) * maxEstimate);
    disp(['Current estimated max value: ', num2str(maxEstimate)]);
end

% 3. 自适应最大值估计（Adaptive Maximum Estimation）
% 通过比较实时数值和当前最大估计值，自适应地更新最大估计值。
% MATLAB示例代码
maxEstimate = -inf; % 初始最大估计值
adaptationRate = 0.05; % 适应率，控制更新速度

for newValue = yourDataStream % 替换为你的数据流
    if newValue > maxEstimate
        maxEstimate = newValue; % 更新最大值
    else
        maxEstimate = maxEstimate - adaptationRate * (maxEstimate - newValue); % 自适应调整
    end
    disp(['Current adaptive max value: ', num2str(maxEstimate)]);
end

% 4. 滞后最大值更新法（Lagged Maximum Update）
% 滞后最大值更新法是在时间上滞后更新最大值，以确保最大值估计不会过早收敛。
% MATLAB示例代码
maxEstimate = -inf; % 初始最大估计值
updateInterval = 10; % 更新间隔，单位为数据点

count = 0;

for newValue = yourDataStream % 替换为你的数据流
    if newValue > maxEstimate
        maxEstimate = newValue; % 更新最大值
        count = 0; % 重置计数器
    else
        count = count + 1;
        if count >= updateInterval
            maxEstimate = newValue; % 滞后更新
            count = 0; % 重置计数器
        end
    end
    disp(['Current lagged max value: ', num2str(maxEstimate)]);
end

% 5. Kalman 滤波法（Kalman Filtering）
% Kalman 滤波是一种基于状态空间模型的估计方法，可以用于估计动态系统中的最大值。
% MATLAB示例代码
maxEstimate = -inf; % 初始最大估计值
P = 1; % 初始误差协方差
Q = 0.01; % 过程噪声协方差
R = 0.1; % 测量噪声协方差

for newValue = yourDataStream % 替换为你的数据流
    % 预测步骤
    maxPredict = maxEstimate;
    P = P + Q;
    
    % 更新步骤
    K = P / (P + R);
    maxEstimate = maxPredict + K * (newValue - maxPredict);
    P = (1 - K) * P;
    
    disp(['Current Kalman max value: ', num2str(maxEstimate)]);
end