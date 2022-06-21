/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:57:47 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/09 10:56:37 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *x, int	*y)
{
	int	t;

	t = *x;
	*x = *y;
	*y = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		temp = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[temp])
			{
				temp = j;
				ft_swap(&tab[temp], &tab[i]);
			}
			j++;
		}
		i++;
	}
}
