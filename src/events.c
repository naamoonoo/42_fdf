#include "fdf.h"

int	key_pressed(int key, void *param)
{
	t_fdf	*f;

	f = (t_fdf *)param;
	if (key == 53)
		exit(0);
	return (0);
}

int mouse_pressed(int button, int x, int y, void *param)
{
	t_fdf	*f;

	f = (t_fdf *)param;
	printf("%d (%d, %d)\n", button, x, y);
	//button -> 1 left clikc, 2 : right click
	// x , y
	return (0);
}
