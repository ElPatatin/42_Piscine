/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:08:30 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/13 13:14:49 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int		i;
	char	*start;

	i = 0;
	start = str;
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	++str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9')
			&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z')
			&& !(*(str -1) >= 'a' && *(str - 1) <= 'z')
			&& *str >= 'a' && *str <= 'z')
				*str -= 32;
		++str;
	}
	return (start);
}
