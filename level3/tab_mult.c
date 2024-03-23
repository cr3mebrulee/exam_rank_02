#include <unistd.h>
#include <stdlib.h>

void	tab_mult(int n)
{
	int i = 1;
	int k = i * n;
	while(i <= 9)
	{
		write(1, "&i * ", 4);
		write(1, "&n = ", 4);
		write(1, "&k\n", 2);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = atoi(argv[1]);
		tab_mult(n);
	}
	write(1, "\n", 1);
}
