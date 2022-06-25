/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:58:45 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/14 14:38:06 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int in = -343254;
	int i0 = 0;
	int i1 = 1;
	int i2 = 2;
	int i3 = 3;
	int i4 = 4;
	int i5 = 5;
	int it = 10;

		printf("----------------------------------------------\n");
	printf("La sequencia fibonacci del indice %d es: %d\n", in, ft_fibonacci(in));
		printf("----------------------------------------------\n");
    printf("La sequencia fibonacci del indice %d es:  %d\n", i0, ft_fibonacci(i0));
		printf("----------------------------------------------\n");
    printf("La sequencia fibonacci del indice %d es:  %d\n", i1, ft_fibonacci(i1));
		printf("----------------------------------------------\n");
    printf("La sequencia fibonacci del indice %d es:  %d\n", i2, ft_fibonacci(i2));
		printf("----------------------------------------------\n");
    printf("La sequencia fibonacci del indice %d es:  %d\n", i3, ft_fibonacci(i3));
		printf("----------------------------------------------\n");
    printf("La sequencia fibonacci del indice %d es:  %d\n", i4, ft_fibonacci(i4));
		printf("----------------------------------------------\n");
    printf("La sequencia fibonacci del indice %d es:  %d\n", i5, ft_fibonacci(i5));
		printf("----------------------------------------------\n");
    printf("La sequencia fibonacci del indice %d es: %d\n", it, ft_fibonacci(it));
		printf("----------------------------------------------\n");
	
		return (0);
}
