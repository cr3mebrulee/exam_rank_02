#include <stdlib.h>
#include <ft_list.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int(*cmp)())
{
	/*checking if begin_list is NULL or if there is pointer pointing to NULL*/
	if(begin_list == NULL || *begin_list == NULL)
		return ;
	/*declaring the pointer to the begining of the list*/
	t_list *cur = *begin_list;
	/*compares the current node with the provided reference data*/
	if(cmp(cur->data, data_ref) == 0)
	{
		/*update *begin_list to point to the next node(cur->next)*/
		*begin_list = cur->next;
		/*free memory allocated for the current node*/
		free(cur);
		/*recursive call with updated node*/
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		/*if they are not equal - recursive call with next node*/
		cur = *begin_list;
		ft_list_remove_if(&cur->next, data_ref, cmp);
	}
}
