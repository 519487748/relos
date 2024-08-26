

N = 53482;

%. number of records to be used for training
Nid = 40000;

% N = 2;
% Nid = 1;

%. total number of input-output records - training and validation
%. number of inputs
m = 2;

% %. inputs
% x = rand(N,m);
% 
% %. outputs
% sides = [ sqrt( (x(:,3)-x(:,1)).^2 + (x(:,4)-x(:,2)).^2 )  sqrt( (x(:,5)-x(:,3)).^2 + (x(:,6)-x(:,4)).^2 )  sqrt( (x(:,1)-x(:,5)).^2 + (x(:,2)-x(:,6)).^2 ) ];
% hper = ( sides(:,1) + sides(:,2) + sides(:,3) )/2;
% y = sqrt( hper .* ( hper - sides(:,1) ) .* ( hper - sides(:,2) ) .* ( hper - sides(:,3) ) );

opts = detectImportOptions('data.xlsx');
opts.PreserveVariableNames = true;
data = readtable('data.xlsx', opts);


% 读取 Excel 数据到表格中
% data = readtable('data.xlsx');

% 将输入数据（第1到第6列）转换为数组
x = table2array(data(:, 1:2));

% 将输出数据（第7列）转换为数组
y = table2array(data(:, 3));

% 打印 x 和 y 以验证数据导入正确
% disp('输入数据 x:');
% disp(x);
% 
% disp('输出数据 y:');
% disp(y);


%. label records to be used for training and validation
lab = ones(N,1);
lab(Nid:end) = 2;
identID = 1;
verifID = 2;

%% numerical param.

%. damping factor for iterative parameter update (also called learning rate)
alp = 0.01;

%. Tikhonov regularisation parameter for Gauss-Newton method 
lam = 0.5;

%. num. of runs through data
Nrun = 200;

%. limits
xmin = 0;
xmax = 360;
ymin = -30;
ymax = 30;

%. num. of nodes bottom
n = 6;

%. num. of nodes top
q = 4;

%. num. of bottom operators, 2*m+1 for classical K.-A.
p = 20;

%% build K.-A.

tic;

%. initialise
[ fnB0, fnT0 ] = buildKA_init( m, n, q, p, ymin, ymax );

%. build model
modelMethod = 1;
if (modelMethod == 1)
    
    %. basis functions - cubic splines, identification method - Gauss-Newton
    [ yhat_all, fnB, fnT, RMSE, t_min_all, t_max_all ] = solveMinGauss( x, y, lab, identID, verifID, alp, lam, Nrun, xmin, xmax, ymin, ymax, fnB0, fnT0 );
    
elseif (modelMethod == 2)
    
    %. basis functions - cubic splines, identification method - Newton-Kaczmarz
    [ yhat_all, fnB, fnT, RMSE, t_min_all, t_max_all ] = buildKA_basisC( x, y, lab, identID, verifID, alp, Nrun, xmin, xmax, ymin, ymax, fnB0, fnT0 );
    
elseif (modelMethod == 3)

    %. basis functions - piecewise-linear, identification method - Newton-Kaczmarz
    [ yhat_all, fnB, fnT, RMSE, t_min_all, t_max_all ] = buildKA_linear( x, y, lab, identID, verifID, alp, Nrun, xmin, xmax, ymin, ymax, fnB0, fnT0 );

end

toc;
save('trainedKAmodel.mat', 'fnB', 'fnT');


%% plot

figure(1);
hold on;
plot(log(RMSE)/log(10));
hold off;
xlabel('number of passes');
ylabel('log_{10}(RMSE)');

figure(2);
hold on;
for jj=1:p
    plot(t_min_all(:,jj),'b');
    plot(t_max_all(:,jj),'r');
end
hold off;
xlabel('number of passes');
ylabel('min/max of intermediate var.');
