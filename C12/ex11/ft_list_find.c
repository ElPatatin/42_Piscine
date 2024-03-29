#include "../ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list || !data_ref)
		return (NULL);
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			break ;
		begin_list = begin_list->next;
	}
	return (begin_list);
}