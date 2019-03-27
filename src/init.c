#include "fdf.h"

int	initailize_fdf(t_fdf **fdf, char *file, char *width, char *height)
{
	if (!((*fdf) = (t_fdf *)malloc(sizeof(t_fdf))))
		return (ERROR);
	if (!((*fdf)->mlx_p = mlx_init()))
		return (ERROR);
	(*fdf)->width = ft_atoi(width) ? ft_atoi(width) : 500;
	(*fdf)->height = ft_atoi(height) ? ft_atoi(height) : 500;
	if (!((*fdf)->win_p = mlx_new_window((*fdf)->mlx_p,
		(*fdf)->width, (*fdf)->height, "42_fdf")))
		return (ERROR);
	// if (!((*fdf)->img_p = mlx_new_image((*fdf)->mlx_p,
	// 	(*fdf)->width, (*fdf)->height)))
	// 	return (ERROR);
	(*fdf)->dim_x = 0;
	(*fdf)->dim_y = 0;
	get_dimension(fdf, file);
	// event_handler(*fdf);
	return (1);
}

int	get_dimension(t_fdf **fdf, char *file)
{
	int		fd;
	int		i;
	char	*temp;
	char	**splitted;

	if((fd = open(file, O_RDONLY)) < 0)
		return (ERROR);
	while((get_next_line(fd, &temp)) > 0)
	{
		i = -1;
		(*fdf)->dim_y += 1;
		splitted = ft_strsplit(temp, ' ');
		free(temp);
		while (splitted[++i])
			free(splitted[i]);
		free(splitted);
		(*fdf)->dim_x = i;
	}
	return (0);
}
