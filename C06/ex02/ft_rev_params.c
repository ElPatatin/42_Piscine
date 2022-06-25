/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:05:26 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/16 10:40:58 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write(int a)
{
	write(1, &a, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	argc--;
	i = argc;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_write(argv[i][j]);
			j++;
		}
		ft_write('\n');
		i--;
	}
	return (0);
}
