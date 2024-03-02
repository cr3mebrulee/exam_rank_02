#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}

	int	i;

	i = 0;
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
	//we use && because we want to continue loop when both of conditions are true
	//if we use || the one condition can be false
	while ((argv[1][i] != ' ' && argv[1][i] != '\t') && argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}
