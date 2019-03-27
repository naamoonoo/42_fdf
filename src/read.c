#include "fdf.h"

void	get_location(char *line, t_fdf **fdf)
{
	static	int	y = 0;
	static	int	idx = 0;
	int			i;
	char		**splitted;

	i = -1;
	if (!((*fdf)->locs = (t_loc *)malloc(sizeof(t_loc) *
		((*fdf)->dim_x * (*fdf)->dim_y))))
		return ;
	// printf("total locs is %d", (*fdf)->dim_x * (*fdf)->dim_y);
	// printf("half of x : %d, y : %d", (*fdf)->dim_x / 2, (*fdf)->dim_y / 2);
	splitted = ft_strsplit(line, ' ');
	while (splitted[++i])
	{
		(*fdf)->locs[idx].x = i - (*fdf)->dim_x / 2;
		(*fdf)->locs[idx].y = y - (*fdf)->dim_y / 2;
		(*fdf)->locs[idx].z = ft_atoi(splitted[i]);
		// printf("(%d, %d, %d)\n", (*fdf)->locs[idx].x, (*fdf)->locs[idx].y, (*fdf)->locs[idx].z);
		idx++;
		free(splitted[i]);
	}
	free(splitted);
	y++;
}

int	ft_read_file(t_fdf **fdf, char *file)
{
	int		fd;
	char	*temp;
	// char	buf[MAX_INPUT];

	if((fd = open(file, O_RDONLY)) < 0)
		return (ERROR);
	// printf("dim x : %d, dix y: %d\n", (*fdf)->dim_x, (*fdf)->dim_y);
	// (*fdf)->loc.x = 0;/
	while ((get_next_line(fd, &temp)) > 0)
	{
		get_location(temp, fdf);
		free(temp);
	}
	// fd = -1;
	// while (++fd < (*fdf)->dim_x * (*fdf)->dim_y)
	// {
	// 	printf("(%d, %d, %d)\n", (*fdf)->locs[fd].x, (*fdf)->locs[fd].y, (*fdf)->locs[fd].z);
	// }
	return (0);
}
