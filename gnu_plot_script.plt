set title "K Nearest Neighbour by Rifqi"
set xlabel "X axis"
set ylabel "Y axis"
unset key
set grid
set xrange [-100:100];
set yrange [-100:100];
plot "output/near_points_file.txt" using 1:2:3 linecolor variable pt 7