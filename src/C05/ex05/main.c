/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:41:47 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/16 12:10:40 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int nn = -43789;
	int n0 = 0;
	int n = 1;
	int n2 = 2;
	int n7 = 1640045925;
	int n4 = 2147395600;
	int n9 = 2147483646;
	int nf = 103041;
	int n81 = 259403236;
	int na = 34882489;
	int n5 = 5;
	int n19 = 19;
	int p = 457;
	int nc = 32788;

	printf("----------------------------------------------\n");
    printf("La raiz quadrada de %d es: %d\n", nn, ft_sqrt(nn));
	printf("----------------------------------------------\n");
	printf("La raiz quadrada de %d es: %d\n", n0, ft_sqrt(n0));
	printf("----------------------------------------------\n");
    printf("La raiz quadrada de %d es: %d\n", n2, ft_sqrt(n2));
	printf("----------------------------------------------\n");
    printf("La raiz quadrada de %d es: %d\n", n7, ft_sqrt(n7));
	printf("----------------------------------------------\n");
    printf("La raiz quadrada de %d es: %d\n", n4, ft_sqrt(n4));
	printf("----------------------------------------------\n");
    printf("La raiz quadrada de %d es: %d\n", n9, ft_sqrt(n9));
	printf("----------------------------------------------\n");
    printf("La raiz quadrada de %d es: %d\n", n, ft_sqrt(n));
	printf("----------------------------------------------\n");
	printf("La raiz quadrada de %d es: %d\n", n81, ft_sqrt(n81));
    printf("----------------------------------------------\n");
	printf("La raiz quadrada de %d es: %d\n", nf, ft_sqrt(nf));
    printf("----------------------------------------------\n");
	printf("La raiz quadrada de %d es: %d\n", nn, ft_sqrt(nn));
    printf("----------------------------------------------\n");
 	printf("La raiz quadrada de %d es: %d\n", na, ft_sqrt(na));
    printf("----------------------------------------------\n");
	printf("La raiz quadrada de %d es: %d\n", nc, ft_sqrt(nc));
    printf("----------------------------------------------\n");
 	printf("La raiz quadrada de %d es: %d\n", n5, ft_sqrt(n5));
    printf("----------------------------------------------\n");
	printf("La raiz quadrada de %d es: %d\n", n19, ft_sqrt(n19));
    printf("----------------------------------------------\n");
	printf("La raiz quadrada de %d es: %d\n", p, ft_sqrt(p));
    printf("----------------------------------------------\n");

	return (0);
}
