close all

X = simOut.logsout{17}.Values.Data;
Y = simOut.logsout{18}.Values.Data;
Z = simOut.logsout{19}.Values.Data;

WaypointsPlot = [P0;Waypoints];

figure;
plot3(Y,X,Z,'-b',WaypointsPlot(:,2),WaypointsPlot(:,1),WaypointsPlot(:,3),'--r','LineWidth',1.5);
hold on;grid on;
scatter3(Y(1),X(1),Z(1),40,'p','filled','MarkerFaceColor','red');
scatter3(Y(end),X(end),Z(end),40,'h','filled','MarkerFaceColor','black');
scatter3(WaypointsPlot(:,2),WaypointsPlot(:,1),WaypointsPlot(:,3),40,'o','MarkerEdgeColor','red');
%axis equal;
%zlim([0 0.6]);
set(gca,'DataAspectRatio' ,[1 1 0.06]);
legend({'Track','Task Path','Start','End','WPs'},'Location','best');legend('boxoff');
xlabel('X[m]');ylabel('Y[m]');zlabel('Depth[m]');
set(gca,'ZDir','reverse');


% 绘制输出信号的图形
% figure;
% plot(maxerr.Values.time, maxerr.Values.data);
% xlabel('Time');
% ylabel('maxerr');
% title('Output Signal vs. Time');