#include "ft_list.h"
#include <stdio.h>

//begin_list is a pointer to a structure of type t_list.
//begin_list->next "access the next member of the structure pointed to by begin_list."

int	ft_list_size(t_list *begin_list)
{
	if(begin_list == 0)
		return(0);
	return (1 + ft_list_size(begin_list->next));
}

int	main()
{
	// Create a linked list with three nodes
	t_list node1, node2, node3;

	// Initialize the linked list
	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	// Calculate the size of the linked list using ft_list_size
	int size = ft_list_size(&node1);

	// Print the result
	printf("Size of the linked list: %d\n", size);

	return 0;
}


