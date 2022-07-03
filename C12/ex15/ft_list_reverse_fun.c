#include "../ft_list.h"

static int	ft_size(t_list *beging_list)
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

t_list	*ft_at(t_list *begin_list, unt nbr)
{
	while (nbr-- > 0 && begin_list)
		begin_list = begin_list->next;
	return (begin_list);	
}

void	ft_list_reverse_fun(t_list *beging_list)
{
	void	*tmp;
	unt		i;
	unt		j;

	i = 0;
	j = l_size(beging_list);
	while (j > i)
	{
		tmp = ft_at(begin_list, i)->data;
		ft_at(begin_list, i)->data = ft_at(begin_list, j)->data;
		ft_at(begin_list, j)->data = tmp;
		++i;
		--j;
	}
}