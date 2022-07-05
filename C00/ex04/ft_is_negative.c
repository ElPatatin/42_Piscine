/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:59:08 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/05 12:59:09 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int	n)
{
	if (n < 0)
		write(STDOUT_FILENO, "N", sizeof(char));
	else
		write(STDOUT_FILENO, "P", sizeof(char));
}

// int	main(void)
// {
// 	int	n;

// 	n = 0;
// 	ft_is_negative(n);
// 	write(1, "\n", 1);

// 	return (0);
// }
