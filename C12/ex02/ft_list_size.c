#include "../ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*current;
	unt		idx;


	if (!begin_list)
		return (NULL);
	current = begin_list;
	idx = 0;
	while (current)
	{
		current = current->next;
		++idx;
	}
	return (idx);
}