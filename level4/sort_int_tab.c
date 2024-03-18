#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;	
	/*Since comparisons are made between adjacent elements 
	 *(tab[i] and tab[i + 1]), it's necessary to stop the loop 
	 * iteration before reaching the last element.*/
	while(i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;

		}
		else
			i++;
	}	
}
