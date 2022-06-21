/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:12:59 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/12 15:19:25 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				src_s;
	unsigned int	dest_s;
	unsigned int	i;

	src_s = 0;
	dest_s = 0;
	i = 0;
	while (src[src_s])
		src_s++;
	if (size == 0)
		return (src_s);
	while (dest[dest_s])
		dest_s++;
	if (size <= dest_s)
		return (size + src_s);
	while (size && (--size - dest_s) && src[i])
	{
		dest[dest_s + i] = src[i];
		i++;
	}
	dest[dest_s + i] = '\0';
	return (src_s + dest_s);
}
