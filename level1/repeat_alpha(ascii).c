#include <unistd.h>
#include <ctype.h>

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

int	ft_isalpha(char c)
{
	if((c >= 'A' && c <= 'Z')
            || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return(0);
}

void find_alpha(char argv[])
{
    int i = 0;
    while (argv[i] != '\0')
    {
        if (ft_isalpha(argv[i]))
        {
            int ctr = 1;
            while (ctr <= 26)
            {
                if (argv[i] == 'A' + ctr - 1 || argv[i] == 'a' + ctr - 1)
                {
                    ft_putalpha(argv[i], ctr);
                    break;
                }
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
