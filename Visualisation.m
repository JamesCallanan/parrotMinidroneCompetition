% Interpreting the data:
FinalSimulationdata = readmatrix("Final_simulationdata.xlsx");
%x_final = table2array(FinalSimulationdata(1:500, 6));
%x_target = table2array(FinalSimulationdata(1:500, 9));
x_final = (FinalSimulationdata(1:500, 6));
x_target = (FinalSimulationdata(1:500, 9));
x_rel = x_final-x_target; % The x-coordinate of the relative position vector
% from where our drone landed to the centre of the target circle ... these
% values should be relatively small ...

%y_final = table2array(FinalSimulationdata(1:500, 7));
%y_target = table2array(FinalSimulationdata(1:500, 10));

y_final = (FinalSimulationdata(1:500, 7));
y_target = (FinalSimulationdata(1:500, 10));

y_rel = y_final-y_target;

x_rel = x_rel.*100;
y_rel = y_rel.*100;

% Let's us draw a circle now ... we'll center it at the origin and give it
% a radius of 2 ...
%viscircles([0 0], 10, 'color', 'r', 'lineStyle', '-', 'lineWidth', 0.3);

r = 10; % The radius of our circle ...
c = [0 0]; % The centre of our circle ...

Corner_Pos = [c-r 2*r 2*r]; % We'll be use the rectangle( ) function which specifies
% a rectangle using a 4-element vector: the first two entries x-y
% coordinate of its bottom left corner. The other two are the width and
% height - also, centre is 2D vector, hence 'c-r' returns 2 numbers,
% meaning Corner_Pos does indeed have four elements ...

% Now to draw our rectangle which will have complete curvature (i.e. [1 1]) ... which is
% a slick way of drawing a circle, and much quicker than most other ones!

Circle = rectangle('Position', Corner_Pos, 'Curvature', [1 1], 'FaceColor', 'red', 'Edgecolor', 'none');
title('\bf\fontname{Georgia}\color{blue}Final Landing Positions');
ylabel('\bf\fontname{Georgia}Y-coordinate');
xlabel('\bf\fontname{Georgia}X-coordinate');
set(gca,'Fontname', 'Georgia');
set(gca,'Color', [0 0.7 0.1]);
xlim([-13 13]);
ylim([-13 13]);

hold on
object = animatedline('color', 'b', 'marker', 'o', 'markersize', 5, 'markerfacecolor', 'b', 'linestyle', 'none');

for i = 1:500
    
    addpoints(object, x_rel(i), y_rel(i));
    drawnow limitrate nocallbacks;
    legend_text = sprintf('Test Number = %i', i); % This way people can easily see the test number we're on ... 
    legend(legend_text);
    pause(0.5-0.95e-3*i) % As i increases, we'll pause for less time ... thereby
    % increasing the speed at which we plot the data - may be a nice visual
    % touch, as is often seen in documentaries ...
    
end

hold off
    





