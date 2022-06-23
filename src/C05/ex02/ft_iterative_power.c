/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:12:41 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/15 10:01:33 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power--)
		i *= nb;
	return (i);
}
