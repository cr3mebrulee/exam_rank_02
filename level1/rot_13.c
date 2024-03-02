#include <unistd.h>

char	replace_letter(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		c += 13;
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		c -= 13;
	return (c);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	int	i;
	char	c;

	i = 0;
	while(argv[1][i] != '\0')
	{
		c = replace_letter(argv[1][i]);
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
