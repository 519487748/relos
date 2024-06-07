%ֱ��
% Waypoints = [45 45 5;
%                         90 90 10;
%                         135 135 15;
%                          180 180 20;
%                          225 225 25;
%                         ];
% WPNum = 5;


%��������
Waypoints = [90 90 2;
                        180 0 4;
                        90 -90 6;
                         0 0 8;
                         90 90 10;
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
Angcalc = [     0   0    0 ;
                        90 90 10;
                        180 0 20;
                        90 -90 30;
                         0 0 40;
                         90 90 50;
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
    angle_deg = rad2deg(angle_rad);

    % ������
    %     fprintf('���� AB �� BC ֮��ļн�Ϊ %.2f ��\n', angle_deg);

    
    Angsave(i) = angle_deg;


end
P0 = [0,0,0];
A0 = [0,68.5,0];