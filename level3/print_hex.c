#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res = 0;
	int	i = 0;
	while(str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	print_hex(nbr)
{
	char *hex = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int n = ft_atoi(argv[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
	return(0);
}
