#include "fdf.h"


//Function for finding absolute value
//DDA Function for line generation
// void DDA(int X0, int Y0, int X1, int Y1)
// {
//     // calculate dx & dy
//     int dx = X1 - X0;
//     int dy = Y1 - Y0;

//     // calculate steps required for generating pixels
//     int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

//     // calculate increment in x & y for each steps
//     float Xinc = dx / (float) steps;
//     float Yinc = dy / (float) steps;

//     // Put pixel for each step
//     float X = X0;
//     float Y = Y0;
//     for (int i = 0; i <= steps; i++)
//     {
//         putpixel (X,Y);  // put pixel at (X,Y)
//         X += Xinc;           // increment in x at each step
//         Y += Yinc;           // increment in y at each step
//         delay(100);          // for visualization of line-
//                              // generation step by step
//     }
// }

void	cleanup(t_fdf **f)
{
	int i;

	i = -1;
	free((*f)->locs);
}

int main(int ac, char *av[])
{
	t_fdf	*fdf;

	if (ac < 4)
	{
		ft_putstr("./fdf *.fdf width height");
		return (0);
	}
	if (initailize_fdf(&fdf, av[1], av[2], av[3]) == ERROR)
		return (0);
	if (ft_read_file(&fdf, av[1]) == ERROR)
		return (0);
	// mlx_put_image_to_window(fdf->mlx_p, fdf->win_p, fdf->img_p, 0, 0);



	// -----------------------leaks test-----------------------
	while(1)
		sleep(1);
	// -----------------------leaks test-----------------------
	return (0);
}


