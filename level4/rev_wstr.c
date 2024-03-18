#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*rev_wstr(char *str)
{
	int	i = 0;
	while(str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
	{
		i++;
	}
	char *rev_str = (char *)malloc(sizeof(char) * (i + 1));
	int j = 0;
	while(i > 0)
	{
		i--;
		rev_str[j] = str[i];
		j++;
	}
	rev_str[j] = '\0';
	j = 0;
	while(rev_str[j] != '\0')
	{
		write(1, &rev_str[j], 1);
		j++;
	}
	return(rev_str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *rev_str = rev_wstr(av[1]);
	free(rev_str);
	return(0);
}
