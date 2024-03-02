#include <unistd.h>
#include <stdio.h>

void	ft_putalpha(char c, int ctr)
{
	int	j;
	j = 0;
	while(j != ctr)
	{
		write(1, &c, 1);
		j++;
	}
}

int     ft_isalpha(char c)
{
	if((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return(0);
}

void	find_alpha(char argv[])
{
	char	alpha[] = {' ' , 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
		'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char	small[] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int	ctr;
	
	int	i = 0;
	while(argv[i] != '\0')
	{
		if (ft_isalpha(argv[i]))
		{
			ctr = 1;
			while(alpha[ctr] != '\0')
			{
				if(argv[i] == alpha[ctr])
				{
					ft_putalpha(argv[i], ctr);
					break;
				}
				else if(argv[i] == small[ctr])
				{
					ft_putalpha(argv[i], ctr);
					break;
				}
				else
					ctr++;
			}

		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	find_alpha(argv[1]);
	return (0);
}
