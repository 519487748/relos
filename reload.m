% ������Ҫ�ظ����еĴ���
num_runs = 3;

% ѭ��ִ�з���
for i = 1:num_runs
    % ���ò���
    rh = 0.002; % ������ɲ���1
    rv = 0.002; % ������ɲ���2
    Deltah = 1 + rand() * 10;
    Deltav = 1 + rand() * 10;
        
    % ���� Simulink ģ�Ͳ����ݲ���
    simOut = sim('PID_Cdelta_U', 'SimulationMode', 'normal', 'SaveOutput', 'on', 'OutputSaveName', 'simOut', 'ExternalInput', '[]');
    
    run('plotCoupled3DTrack.m');
    
    % ��ȡ������
    %simData = simOut.get('simOut');
    maxerr = simOut.logsout{22};
    
    A = [i, Deltah, Deltav, maxerr.Values.data(end)];
    
    if i == 1
        xlswrite('save_data_test.xlsx', A, 'Sheet1');
    else
        % ��ȡ�Ѵ��ڵ�����
        existing_data = xlsread('save_data_test.xlsx');

        % �����������Ѵ��ڵ����ݺϲ�
        combined_data = [existing_data; A];

        % ���ϲ��������д�� Excel �ļ�
        xlswrite('save_data_test.xlsx', combined_data);
    end
    
    % ��ӡ��ǰ����ֵ�ͽ��ֵ
    %fprintf('Run %d: rh = %.4f, rv = %.4f, maxerr =%.4f \n', i, rh, rv, maxerr);
    fprintf('Run %d: Deltah = %.4f, Deltav = %.4f, maxerr =%.4f \n', i, Deltah, Deltav, maxerr.Values.data(end));
    %fprintf('Run %d: Deltah = %.4f, Deltav = %.4f\n', i, Deltah, Deltav);


end

% �ڴ˴����������飬�����ͼ���������ݵ�
