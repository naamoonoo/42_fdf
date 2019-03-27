#ifndef FDF_H
#define FDF_H

#include "../minilibx/mlx.h"
#include "libft.h"
#include <math.h>

//
#include <stdio.h>
//

typedef struct	s_location
{
	int			x;
	int			y;
	int			z;
}				t_loc;


typedef struct	s_fdf
{
	void		*mlx_p;
	void		*win_p;
	void		*img_p;
	int			width;
	int			height;
	t_loc		*locs;
	int			color;
	int			dim_x;
	int			dim_y;
	int			x1;
	int			y1;
	int			x2;
	int			y2;
	int			h_min;
	int			h_max;

}				t_fdf;

int				initailize_fdf(t_fdf **fdf, char *file, char *width, char *height);
int				get_dimension(t_fdf **fdf, char *file);

int				ft_read_file(t_fdf **fdf, char *file);
void			get_location(char *line, t_fdf **fdf);



void			event_handler(t_fdf *fdf);
int				key_pressed(int key, void *param);
int				mouse_pressed(int button, int x, int y, void *param);

void			cleanup(t_fdf **fdf);

#endif
