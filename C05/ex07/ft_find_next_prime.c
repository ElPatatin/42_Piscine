/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:39:38 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/15 14:17:12 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	i = 2;
	n = 1;
	if (nb <= 1)
		n = 0;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			n = 0;
		i++;
	}
	return (n);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		nb = 2;
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
