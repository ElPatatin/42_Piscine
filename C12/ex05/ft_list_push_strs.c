#include "../ft_list.h"

static void	ft_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elt;

	new_elt = ft_create_elem(data);
	new_elt->next = *begin_list;
	*begin_list = new_elt;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*new_strs;
	unt		idx;

	new_strs = NULL
	idx = 0;
	while (i < size)
		ft_push_front(&new_strs, strs[i++]);
	return (new_strs);
}