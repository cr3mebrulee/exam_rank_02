#include <unistd.h>

void	ft_write_number(int number)
{
	if (number > 9)
	{
		ft_write_number(number / 10);
		ft_write_number(number % 10);
	}
	else
		write (1, &i, 1);
}

int	main()
{
	int	i;
	i = 1;
	while(i <= 100)
	{	
		if(i % 15 == 0)
			write(1, "fizzbuzz", 9);
		else if(i % 3 == 0)
			write(1, "fizz", 5);
		else if(i % 5 == 0)
			write(1, "buzz", 5);
		else
			ft_write_number(i);
		write(1, "\n", 1);
		i += 1;
	}
	return(0);
}
