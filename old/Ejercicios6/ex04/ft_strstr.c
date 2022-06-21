/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:08:48 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/12 14:12:48 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_comp(char	*x, char	*y)
{
	while (*x && *y)
	{
		if (*x != *y)
		{
			return (0);
		}
		x++;
		y++;
	}
	return (*y == '\0');
}

char	*ft_strstr(char	*str, char	*to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	else
	{
		while (*str)
		{
			if ((*str == *to_find) && ft_comp(str, to_find))
			{
				return (str);
			}
			str++;
		}
	}
	return NULL;
}
