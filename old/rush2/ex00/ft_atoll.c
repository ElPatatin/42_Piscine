/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:55:29 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/17 10:25:16 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

long long	ft_atoll(const char *str)
{
	long long	num;
	int	i;

	i = 0;
	num = 1;
	while (str[i])
	{	
		if(str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + ((long)str[i] - '0');
			i++;
		}
	}
	return (num);
}
