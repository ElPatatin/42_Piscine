/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:58:30 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/05 12:58:32 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

// int	main(void)
// {
// 	char	c;

// 	c = 'c';
// 	ft_putchar('c');
// 	ft_putchar('\n');
// 	ft_putchar(c);
// 	ft_putchar('\n');

// 	return (0);
// }
