#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

int	is_prime(int num)
{
	int	nb = 2;

	if (num <= 1)
		return (0);
	while (nb * nb <= num)
	{
		if (num % nb == 0)
			return (0);
		nb++;
	}
	return (1);
}

void	put_nbr(int n)
{
	char digit;

	if (n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int	nbr = ft_atoi(argv[1]);
	int	sum = 0;

	while (nbr > 0)
	{
		if (is_prime(nbr))
			sum += nbr;
		nbr--;
	}
	put_nbr(sum);
	write(1, "\n", 1);
	return (0);
}
