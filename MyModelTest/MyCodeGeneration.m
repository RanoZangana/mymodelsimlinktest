run('MyScript.mlx');

model = 'MyModel';
load_system(model);

rtwbuild(model);

close_system(model, 0);