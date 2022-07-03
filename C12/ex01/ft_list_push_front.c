#include "../ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elt;

	new_elt = ft_create_elem(data);
	new_elt->next = *begin_list;
	*begin_list = new_elt;
}