% ������Ҫ�ظ����еĴ���
%num_runs = 150;
num_runs = 1;
a = 1;
% ѭ��ִ�з���
for i = a : num_runs
    % ���ò���
    rh = 0.005; % ������ɲ���1
    rv = 0.002; % ������ɲ���2
    Deltah = 5;
    Deltav = 3;
    acgu = -30;
    btgu = 45;
    brc = 99 + a; %49
        
    % ���� Simulink ģ�Ͳ����ݲ���
    simOut = sim('PID_Cdelta_U', 'SimulationMode', 'normal', 'SaveOutput', 'on', 'OutputSaveName', 'simOut', 'ExternalInput', '[]');
    
    run('plotCoupled3DTrack.m');
    
    
    
    % ��ȡ������
    %simData = simOut.get('simOut');
    maxerr = simOut.logsout{31};
    
    A = [a, brc, maxerr.Values.data(end)];
    
    if a == 1
        xlswrite('save_brc_test.xlsx', A, 'Sheet1');
    else
        % ��ȡ�Ѵ��ڵ�����
        existing_data = xlsread('save_brc_test.xlsx');

        % �����������Ѵ��ڵ����ݺϲ�
        combined_data = [existing_data; A];

        % ���ϲ��������д�� Excel �ļ�
        xlswrite('save_brc_test.xlsx', combined_data);
    end
    
    
    % ��ӡ��ǰ����ֵ�ͽ��ֵ
    fprintf('Run %d finish: brc = %.4f, maxerr =%.4f \n',a , brc, maxerr.Values.data(end));
    a = a + 1;
end

% �ڴ˴����������飬�����ͼ���������ݵ�
