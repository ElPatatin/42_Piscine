/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:44:15 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/06/24 22:44:16 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_display.h"

int	ft_putchar(char c)
{
	ssize_t	bytes;

	bytes = write(STDOUT_FILENO, &c, sizeof(char));
	return (bytes);
}

int	ft_putstr(char *s)
{
	ssize_t	bytes;

	bytes = 0;
	while (*s)
	{
		bytes += ft_putchar(*s);
		if (bytes == -1)
			return (bytes);
		++s;
	}
	return (bytes);
}
