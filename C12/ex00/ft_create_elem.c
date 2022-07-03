#include "../ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_lst;

	new_lst = (t_list *)malloc(sizeof(t_list));
	if (!new_elt)
		return (NULL);
	new_elt->data = data;
	new_elt->next = NULL;
	return (new_elt);
}