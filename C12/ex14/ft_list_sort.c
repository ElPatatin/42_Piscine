#include "../ft_list.h"

static void	ft_swap(t_list *a,t_list *b)
{
	int	tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int	swap;
	t_list *current;

	swap = 1;
	current = *begin_list;
	while (swap == 1)
	{
		swap = 0;
		while (current && current->next)
		{
			if ((*cmp)(current->data, currenst->next->data) == 0)
			{
				ft_swap(current, current->next);
				swap = 1;
			}
			current = current->next;
		}
	}
}