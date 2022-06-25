/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:36:24 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/16 10:40:05 by cpeset-c         ###   ########.fr       */
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

	i = 0;
	(void)argc;
	while (argv[0][i] != '\0')
	{
		ft_write(argv[0][i]);
		i++;
	}
	ft_write('\n');
	return (0);
}
