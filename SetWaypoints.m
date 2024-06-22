%ֱ��
% Waypoints = [45 45 5;
%                         90 90 10;
%                         135 135 15;
%                          180 180 20;
%                          225 225 25;
%                         ];
% WPNum = 5;


% �������� sd=9
% Waypoints = [100        100         7;
%                         200         0            14;
%                         100          -100         21;
%                          0              0           28;
%                          100           100         35;
%                         ];
% WPNum = 5;

%60-120����  sd = 9
% Waypoints = [100 100*sqrt(3) 7;
%                         200 0 14;
%                         100 -100*sqrt(3) 21;
%                          0 0 28;
%                          100 100*sqrt(3) 35;
%                         ];
% WPNum = 5;

% 60����  sd = 9
% Waypoints = [100 100*sqrt(3) 7;
%                         200 0 14;
%                         0 0 21;
%                          100 100*sqrt(3) 28;
%                          200 0 35;
%                         ];
% WPNum = 5;

% 45����  sd = 9
% Waypoints = [
%             150         150        7;
%             150           0        14;
%             0           150       21;
%             150         150        28;
%              0              0          35;
%                         ];
% WPNum = 5;

% 120����  sd = 9
% Waypoints = [
%             100         100*sqrt(3)        7;
%             300         100*sqrt(3)       14;
%             400             0                    21;
%             300         -100*sqrt(3)        28;
%             100         -100*sqrt(3)          35;
%                         ];
% WPNum = 5;


% 135����  sd = 9
% Waypoints = [
%             100                                 100                7;
%             100+100*sqrt(2)         100                  14;
%             200+100*sqrt(2)             0                  21;
%             100+100*sqrt(2)        -100                 28;
%             100                               -100              35;
%                         ];
% WPNum = 5;

% ����  sd = 9
Waypoints = [
                        100        100         7;
                        200         100            14;
                        260          0         21;
                         200           -100           28;
                         100           -100        35;
                        ];
WPNum = 5;



%��������
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
    
        % ����������
    A = Angcalc(i, :);
    B = Angcalc(i + 1, :);
    C = Angcalc(i + 2, :);

    % �������� AB �� BC
    BA = A - B;
    BC = C - B;

    % ����������ģ�����ȣ�
    norm_BA = norm(BA);
    norm_BC = norm(BC);

    % ���������ĵ��
    dot_product = dot(BA, BC);

    % ��������֮��ļнǣ����ȣ�
    angle_rad = acos(dot_product / (norm_BA * norm_BC));

    % ������ת��Ϊ��
%     angle_deg = rad2deg(angle_rad);

    % ������
    %     fprintf('���� AB �� BC ֮��ļн�Ϊ %.2f ��\n', angle_deg);

    
    Angsave(i) = 1/angle_rad;


end
P0 = [0,0,0];
A0 = [0,45,-10];