/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:31:02 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/14 09:50:30 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int z = -1;
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 3;
	int e = 4;
	int f = 5;
	int g = 6;
	int h = 7;
	int i = 8;
	int j = 9;
	int k = 10;
	int l = 11;
	int m = 12;
	int n = 13;
	
	printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", z, ft_iterative_factorial(z));
	printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", a, ft_iterative_factorial(a));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", b, ft_iterative_factorial(b));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", c, ft_iterative_factorial(c));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", d, ft_iterative_factorial(d));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", e, ft_iterative_factorial(e));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", f, ft_iterative_factorial(f));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", g, ft_iterative_factorial(g));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", h, ft_iterative_factorial(h));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", i, ft_iterative_factorial(i));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", j, ft_iterative_factorial(j));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", k, ft_iterative_factorial(k));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", l, ft_iterative_factorial(l));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d\n", m, ft_iterative_factorial(m));
    printf("----------------------------------------------\n");
	printf("Factorial de %d es: %d -> Error\n", n, ft_iterative_factorial(n));
    printf("----------------------------------------------\n");


	return (0);
}
