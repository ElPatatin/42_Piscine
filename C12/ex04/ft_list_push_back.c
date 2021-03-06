#include "../ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_end;
	t_list	*current;

	new_end = ft_create_elem(data);
	if (!begin_list)
	{
		*begin_list = new_end;
		return ;
	}
	current = *begin_list;
	while (current->next)
		current = current->next;
	current->next = new_end;
}