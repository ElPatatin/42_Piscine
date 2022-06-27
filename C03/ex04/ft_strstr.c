/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:10:11 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/06/27 18:19:08 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_comp(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
			return (0);
		x++;
		y++;
	}
	return (*y == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if ((*str == *to_find) && ft_comp(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
