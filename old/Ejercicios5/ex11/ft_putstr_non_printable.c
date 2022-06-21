/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:04:19 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/13 13:06:35 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_write(int a)
{
	write(1, &a, 1);
}

void	ft_hexa(int i)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (i > 16)
	{
		ft_hexa(i / 16);
		ft_hexa(i % 16);
	}
	else
	{
		ft_write(hexa[i]);
	}
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			ft_write('\\');
			if (str[i] < 16)
				ft_write('0');
			ft_hexa(str[i]);
		}
		else
		{
			ft_write(str[i]);
		}
		i += 1;
	}
}
