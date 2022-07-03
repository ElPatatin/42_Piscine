#include "../ft_list.h"

static void ft_sorted_list_insert_element(t_list **list, t_list *element, int (*cmp)()) // function takes in ex16 but have some modification.
{
    if (!*list || cmp(element->data, (*list)->data) <= 0)
    {
        element->next = *list;
        *list = element;
    }
    else
        ft_sorted_list_insert_element(&(*list)->next, element, cmp);
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
    if (!begin_list2)
        return ;
    ft_sorted_list_merge(begin_list1, begin_list2->next, cmp);
    ft_sorted_list_insert_element(begin_list1, begin_list2, cmp);
}