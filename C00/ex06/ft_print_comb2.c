/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:59:30 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/05 12:59:31 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a)
{
	write(STDOUT_FILENO, &a, sizeof(char));
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while	(i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_write((i / 10) + '0');
			ft_write((i % 10) + '0');
			ft_write(' ');
			ft_write((j / 10) + '0');
			ft_write((j % 10) + '0');
			if (!(i == 98 && j == 99))
				write(STDOUT_FILENO, ", ", sizeof(char) * 2);
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	ft_write('\n');
// 	return (0);
// }
