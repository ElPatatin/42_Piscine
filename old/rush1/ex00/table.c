/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:55:32 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/10 18:05:49 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_tabla(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 1;
	while (i <= 4)
	{
		j = i;
		while (j <= 4)
		{
			write(1, "0 ", 2);
			if (k % 4 == 0)
			{
				write(1, "\n", 1);
			}
			if (j * i == 16)
			{
				write(1, "0\n", 2);
			}
			k++;
			j++;
		}
		i++;
	}
}
