/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:34:47 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/15 10:48:21 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime_verifier(int nb)
{
	int i;
	int n;

	i = 2;
	n = 1;
	if (nb <= 1)
		n = 0;
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
		{
			n = 0;
			break ;
		}
	i++;
	}
	return (n);
}