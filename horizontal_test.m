function circleFound = horizontal_test(row,col,BW)
num_col = 160;
circleFound = false;

diameter = 37;
diameter_margin = 1; 

centre_margin = 1;
red_px_count = 0; %count of consecutive red pixels in a column - is updated as we traverse columns

for i = 1:1:(num_col-1) %traverse columns in BW image
        %Adjusting red_px_count 
        if (BW(row,i) == 0) %i.e. if pixel is red
            red_px_count = red_px_count + 1;
        else 
            red_px_count = 0;
        end
        %Checking if red_px_count = ~ diameter of circle
        if ( (red_px_count <= diameter + diameter_margin) && (red_px_count >= diameter - diameter_margin) && BW(row,i+1) == 1)
            col_no = i - (red_px_count - 1)/2;
            if ( col_no <= col + centre_margin && col_no >= col - centre_margin )
                circleFound = true;
                break;
            end
        end
end
