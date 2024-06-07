% 1. �������ڷ���Moving Window Method��
% �������ڷ���һ�ֳ����ķ��������ڹ���һ��ʱ���ڵ����ֵ��ͨ��ά��һ���̶����ȵĴ��ڣ�ʵʱ���´����ڵ����ֵ��
% MATLABʾ������
windowSize = 10; % ���ڴ�С
data = []; % ���ڴ洢���������ڵ�ʵʱ����
maxValue = -inf; % ��ʼ���ֵ

for newValue = yourDataStream % �滻Ϊ���������
    data = [data, newValue]; % ��������ݵ�����
    if length(data) > windowSize
        data(1) = []; % ���ڻ������Ƴ����������
    end
    maxValue = max(data); % ���㴰���ڵ����ֵ
    disp(['Current max value in window: ', num2str(maxValue)]);
end

% 2. ָ����Ȩ�ƶ�ƽ������Exponential Moving Average��
% ʹ��ָ����Ȩ�ƶ�ƽ�������������ֵ�����ַ����Խ��µ����ݸ�����ߵ�Ȩ�ء�
% MATLABʾ������
alpha = 0.1; % ƽ��ϵ����ȡֵ��Χ��0��1֮��
maxEstimate = -inf; % ��ʼ������ֵ

for newValue = yourDataStream % �滻Ϊ���������
    maxEstimate = max(maxEstimate, alpha * newValue + (1 - alpha) * maxEstimate);
    disp(['Current estimated max value: ', num2str(maxEstimate)]);
end

% 3. ����Ӧ���ֵ���ƣ�Adaptive Maximum Estimation��
% ͨ���Ƚ�ʵʱ��ֵ�͵�ǰ������ֵ������Ӧ�ظ���������ֵ��
% MATLABʾ������
maxEstimate = -inf; % ��ʼ������ֵ
adaptationRate = 0.05; % ��Ӧ�ʣ����Ƹ����ٶ�

for newValue = yourDataStream % �滻Ϊ���������
    if newValue > maxEstimate
        maxEstimate = newValue; % �������ֵ
    else
        maxEstimate = maxEstimate - adaptationRate * (maxEstimate - newValue); % ����Ӧ����
    end
    disp(['Current adaptive max value: ', num2str(maxEstimate)]);
end

% 4. �ͺ����ֵ���·���Lagged Maximum Update��
% �ͺ����ֵ���·�����ʱ�����ͺ�������ֵ����ȷ�����ֵ���Ʋ������������
% MATLABʾ������
maxEstimate = -inf; % ��ʼ������ֵ
updateInterval = 10; % ���¼������λΪ���ݵ�

count = 0;

for newValue = yourDataStream % �滻Ϊ���������
    if newValue > maxEstimate
        maxEstimate = newValue; % �������ֵ
        count = 0; % ���ü�����
    else
        count = count + 1;
        if count >= updateInterval
            maxEstimate = newValue; % �ͺ����
            count = 0; % ���ü�����
        end
    end
    disp(['Current lagged max value: ', num2str(maxEstimate)]);
end

% 5. Kalman �˲�����Kalman Filtering��
% Kalman �˲���һ�ֻ���״̬�ռ�ģ�͵Ĺ��Ʒ������������ڹ��ƶ�̬ϵͳ�е����ֵ��
% MATLABʾ������
maxEstimate = -inf; % ��ʼ������ֵ
P = 1; % ��ʼ���Э����
Q = 0.01; % ��������Э����
R = 0.1; % ��������Э����

for newValue = yourDataStream % �滻Ϊ���������
    % Ԥ�ⲽ��
    maxPredict = maxEstimate;
    P = P + Q;
    
    % ���²���
    K = P / (P + R);
    maxEstimate = maxPredict + K * (newValue - maxPredict);
    P = (1 - K) * P;
    
    disp(['Current Kalman max value: ', num2str(maxEstimate)]);
end