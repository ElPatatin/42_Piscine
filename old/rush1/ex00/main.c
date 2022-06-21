/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:49:57 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/10 18:15:31 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_tabla(void);

//void	ft_write(*str);
/*argv = (char **) malloc(16);
 25 free(argv);*/
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], 32);
		write(1, "\n\n", 2);
		i++;
	}
	ft_tabla();
	return (0);
}
