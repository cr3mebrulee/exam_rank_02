/*
#include <stdlib.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

int compare(int a, int b) {
    return a - b; // Sort in ascending order
}
*/

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;
	
	if (!lst)
			return (0);
	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) > 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
		}
			lst = lst->next;
	}
	return (tmp);
}
/*
int main() {
    // Create a linked list
    t_list *head = malloc(sizeof(t_list));
    head->data = 0;
    head->next = malloc(sizeof(t_list));
    head->next->data = 10;
    head->next->next = malloc(sizeof(t_list));
    head->next->next->data = 5;
    head->next->next->next = NULL;

    // Print the original list
    printf("Original list:\n");
    t_list *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Sort the list
    head = sort_list(head, compare);

    // Print the sorted list
    printf("Sorted list:\n");
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Free the memory
    current = head;
    while (current != NULL) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
*/
