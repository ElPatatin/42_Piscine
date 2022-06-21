/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:34:10 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/07 10:41:12 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_if_zero(int z)
{
	if (z == 0)
	{
		ft_write('0');
	}
}

void	ft_putnbr(int nb)
{
	long	i;
	int		j;
	char	c[10];

	i = nb;
	ft_if_zero(i);
	if (i < 0)
	{
		ft_write('-');
		i = -i;
	}
	j = 0;
	while (i > 0)
	{
		c[j] = (i % 10) + '0';
		i = i / 10;
		j++;
	}
	j--;
	while (j >= 0)
	{
		ft_write(c[j]);
		j--;
	}
}
