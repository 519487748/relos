%直线
% Waypoints = [45 45 5;
%                         90 90 10;
%                         135 135 15;
%                          180 180 20;
%                          225 225 25;
%                         ];
% WPNum = 5;


% 正方螺旋 sd=9
% Waypoints = [100        100         7;
%                         200         0            14;
%                         100          -100         21;
%                          0              0           28;
%                          100           100         35;
%                         ];
% WPNum = 5;

%60-120螺旋  sd = 9
% Waypoints = [100 100*sqrt(3) 7;
%                         200 0 14;
%                         100 -100*sqrt(3) 21;
%                          0 0 28;
%                          100 100*sqrt(3) 35;
%                         ];
% WPNum = 5;

% 60螺旋  sd = 9
% Waypoints = [100 100*sqrt(3) 7;
%                         200 0 14;
%                         0 0 21;
%                          100 100*sqrt(3) 28;
%                          200 0 35;
%                         ];
% WPNum = 5;

% 45螺旋  sd = 9
% Waypoints = [
%             150         150        7;
%             150           0        14;
%             0           150       21;
%             150         150        28;
%              0              0          35;
%                         ];
% WPNum = 5;

% 120螺旋  sd = 9
% Waypoints = [
%             100         100*sqrt(3)        7;
%             300         100*sqrt(3)       14;
%             400             0                    21;
%             300         -100*sqrt(3)        28;
%             100         -100*sqrt(3)          35;
%                         ];
% WPNum = 5;


% 135螺旋  sd = 9
% Waypoints = [
%             100                                 100                7;
%             100+100*sqrt(2)         100                  14;
%             200+100*sqrt(2)             0                  21;
%             100+100*sqrt(2)        -100                 28;
%             100                               -100              35;
%                         ];
% WPNum = 5;

% 测试  sd = 9
Waypoints = [
                        100        100         7;
                        200         100            14;
                        260          0         21;
                         200           -100           28;
                         100           -100        35;
                        ];
WPNum = 5;



%变向折线
% Waypoints = [90 90 10;
%                         180 90 20;
%                         90 0 30;
%                          0 0 40;
%                          180 90 50;
%                         ];
% WPNum = 5;



Angsave = zeros(0, WPNum - 1);
Angcalc = [         0           0           0
                        100        100         7;
                        200         100            14;
                        260          0         21;
                         200           -100           28;
                         100           -100        35;
                        ];

for i = 1:(WPNum - 1)
    
        % 定义点的坐标
    A = Angcalc(i, :);
    B = Angcalc(i + 1, :);
    C = Angcalc(i + 2, :);

    % 计算向量 AB 和 BC
    BA = A - B;
    BC = C - B;

    % 计算向量的模（长度）
    norm_BA = norm(BA);
    norm_BC = norm(BC);

    % 计算向量的点积
    dot_product = dot(BA, BC);

    % 计算向量之间的夹角（弧度）
    angle_rad = acos(dot_product / (norm_BA * norm_BC));

    % 将弧度转换为度
%     angle_deg = rad2deg(angle_rad);

    % 输出结果
    %     fprintf('向量 AB 和 BC 之间的夹角为 %.2f 度\n', angle_deg);

    
    Angsave(i) = 1/angle_rad;


end
P0 = [0,0,0];
A0 = [0,45,-10];