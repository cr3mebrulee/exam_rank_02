#include <unistd.h>

void	put_alpha(char c, int n)
{
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

void	repeat_alpha(char *str)
{
	int	i = 0;
	int	n;

	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			n = str[i] - 64;
			put_alpha(str[i], n);
		}
		else if(str[i] >= 'a' && str[i] <= 'z')
		{
			n = str[i] - 96;
			put_alpha(str[i], n);
		}
		else
			write(1, &str[i], 1);
		i++;

	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
}
