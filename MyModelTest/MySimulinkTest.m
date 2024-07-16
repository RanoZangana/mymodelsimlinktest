%Load in parameters from script
run('MyScript.mlx');

% Load the Simulink Model
model = 'MyModel';
load_system(model);

% Test
simout = sim(model);
simout.logsout.get('x').Values;

% Assert
assert(simout.logout.get('x').Values.Time(end)==10);

close_system(model, 0);