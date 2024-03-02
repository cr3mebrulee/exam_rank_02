
void	ft_swap(int *a, int *b)
{
	int	*tmp;
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

#include <stdio.h>
int	main()
{
	int	c = 4;
	int	d = 8;

	int	*a = &c;
	int	*b = &d;
	ft_swap(a, b);
	printf("%i, %i", c, d);
}
