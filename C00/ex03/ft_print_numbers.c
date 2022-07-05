/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:58:56 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/05 12:58:57 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void	ft_print_numbers1(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		ft_write(i);
		i++;
	}
	ft_write('\n');
}

// void	ft_print_numbers2(void)
// {
// 	write(1, "0123456789\n", 11);
// }

// void	ft_print_reverse_numbers(void)
// {
// 	char	i;

// 	i = '9';
// 	while (i >= '0')
// 	{
// 		ft_write(i);
// 		i--;
// 	}
// 	ft_write('\n');
// }

// int	main(void)
// {
// 	ft_print_numbers1();
// 	ft_print_numbers2();
// 	ft_print_reverse_numbers();
// 	return (0);
}
