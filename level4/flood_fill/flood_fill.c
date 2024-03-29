/*
#include "flood_fill.h"
#include <stdio.h>
#include <stdlib.h>
*/

void	fill(char **arr, t_point size, t_point beg, char c)
{
	if(beg.y < 0 || beg.y >= size.y || beg.x < 0 || beg.x >= size.x
			|| arr[beg.y][beg.x] != c)
		return ;
	arr[beg.y][beg.x] = 'F';
	fill(arr, size, (t_point){beg.x - 1, beg.y}, c);
	fill(arr, size, (t_point){beg.x + 1, beg.y}, c);
	fill(arr, size, (t_point){beg.x, beg.y - 1}, c);
	fill(arr, size, (t_point){beg.x, beg.y + 1}, c);
}

void	flood_fill(char **arr, t_point size, t_point begin)
{
	fill(arr, size, begin, arr[begin.y][begin.x]);
}

/*
char	**make_area(char **zone, t_point size)
{
	char	**new = malloc(sizeof(char *) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}
	return (new);
}

int	main()
{
	t_point	size = {8, 5};
	char	*zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**	area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	
	for (int i = 0; i < size.y; ++i)
    		free(area[i]);
	free(area);
	return(0);
}
*/
