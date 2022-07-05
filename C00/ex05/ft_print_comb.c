/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:59:18 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/05 12:59:22 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int i, int j, int k)
{
	if (!(i == j && i == k && j == k))
	{
		write(STDOUT_FILENO, &i, sizeof(char));
		write(STDOUT_FILENO, &j, sizeof(char));
		write(STDOUT_FILENO, &k, sizeof(char));
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_write(i, j, k);
				if (!(i == '7' && j == '8' && k == '9'))
					write(STDOUT_FILENO, ", ", sizeof(char) * 2);
				k++;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	write(1, "\n", 1);
// 	return (0);
// }
