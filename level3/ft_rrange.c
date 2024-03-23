#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	length = abs(end - start) + 1;
	int	*arr = (int *)malloc(sizeof(int) * length);
	if(!arr)
		return(0);

	int	direction = (end > start) ? 1 : -1;

	int	i = 0;
	int	current = end;
	while(i < length)
	{
		arr[i] = current;
		current -= direction;
		i++;
	}
	return(arr);
}
/*
#include <stdio.h>
int	main()
{
	int	start = 3;
	int	end = -9;
	int	*rev_arr = ft_rrange(start, end);
	int	lenght = 0;
	int	i = 0;
	while(rev_arr[i] != '!')
	{
		printf("%d", rev_arr[i]);
		i++;
	}
}
*/
