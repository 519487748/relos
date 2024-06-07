%直线
% Waypoints = [45 45 5;
%                         90 90 10;
%                         135 135 15;
%                          180 180 20;
%                          225 225 25;
%                         ];
% WPNum = 5;


%正方螺旋
Waypoints = [90 90 2;
                        180 0 4;
                        90 -90 6;
                         0 0 8;
                         90 90 10;
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
Angcalc = [     0   0    0 ;
                        90 90 10;
                        180 0 20;
                        90 -90 30;
                         0 0 40;
                         90 90 50;
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
    angle_deg = rad2deg(angle_rad);

    % 输出结果
    %     fprintf('向量 AB 和 BC 之间的夹角为 %.2f 度\n', angle_deg);

    
    Angsave(i) = angle_deg;


end
P0 = [0,0,0];
A0 = [0,68.5,0];