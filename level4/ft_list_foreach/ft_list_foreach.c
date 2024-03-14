#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

/*typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;*/

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;
	list_ptr = begin_list;
	while(list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

void	print_data(void *data)
{
	/* casting is necessary cause data is declared as a pointer to void */
	int	*value = (int *)data;
	printf("%d", *value);
}

int	main()
{
// Allocate memory for node1
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    if (node1 == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Return error code
    }
    node1->data = (void *)1;

    // Allocate memory for node2
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    if (node2 == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free(node1); // Free previously allocated memory
        return 1;    // Return error code
    }
    node2->data = (void *)2;

    // Allocate memory for node3
    t_list *node3 = (t_list *)malloc(sizeof(t_list));
    if (node3 == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        free(node1); // Free previously allocated memory
        free(node2); // Free previously allocated memory
        return 1;    // Return error code
    }
    node3->data = (void *)3;

    // Link the nodes together
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Initialize begin_list to point to the first node
    t_list *begin_list = node1;

    // Print elements of the linked list
    printf("Elements of the linked list: ");
    ft_list_foreach(begin_list, print_data);
    printf("\n");

    // Free dynamically allocated memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
