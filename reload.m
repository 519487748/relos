% 定义需要重复运行的次数
num_runs = 3;

% 循环执行仿真
for i = 1:num_runs
    % 设置参数
    rh = 0.002; % 随机生成参数1
    rv = 0.002; % 随机生成参数2
    Deltah = 1 + rand() * 10;
    Deltav = 1 + rand() * 10;
        
    % 调用 Simulink 模型并传递参数
    simOut = sim('PID_Cdelta_U', 'SimulationMode', 'normal', 'SaveOutput', 'on', 'OutputSaveName', 'simOut', 'ExternalInput', '[]');
    
    run('plotCoupled3DTrack.m');
    
    % 获取仿真结果
    %simData = simOut.get('simOut');
    maxerr = simOut.logsout{22};
    
    A = [i, Deltah, Deltav, maxerr.Values.data(end)];
    
    if i == 1
        xlswrite('save_data_test.xlsx', A, 'Sheet1');
    else
        % 读取已存在的数据
        existing_data = xlsread('save_data_test.xlsx');

        % 将新数据与已存在的数据合并
        combined_data = [existing_data; A];

        % 将合并后的数据写入 Excel 文件
        xlswrite('save_data_test.xlsx', combined_data);
    end
    
    % 打印当前参数值和结果值
    %fprintf('Run %d: rh = %.4f, rv = %.4f, maxerr =%.4f \n', i, rh, rv, maxerr);
    fprintf('Run %d: Deltah = %.4f, Deltav = %.4f, maxerr =%.4f \n', i, Deltah, Deltav, maxerr.Values.data(end));
    %fprintf('Run %d: Deltah = %.4f, Deltav = %.4f\n', i, Deltah, Deltav);


end

% 在此处处理结果数组，如绘制图表、保存数据等
