#include "../ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	tmp;
	t_list	tmp2;

	if (!begin_list)
		return ;
	while (begin_list)
	{
			tmp = begin_list->next;
			tmp2 = begin_list->data;
			free_fct(tmp2);
			free(begin_list);
			begin_list = tmp;	
	}
}
