/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 11:25:34 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/14 13:57:20 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main(void)
{
	int pown = -1;
	int pow0 = 0;
	int pow1 = 1;
	int pow2 = 2;
	int pow3 = 3;
	int pow4 = 4;
	int pow5 = 5;
	int powt = 10;

	int n0 = 0;
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;
	int n4 = 4;
	int n5 = 5;
	int nt = 10;

	printf("\n\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n0, pown, ft_iterative_power(n0, pown));
	printf("\t----------------------------------------------\n");
	printf("\tPotencia de %d amb exponent %d es: %d\n", n0, pow0, ft_iterative_power(n0, pow0));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n0, pow1, ft_iterative_power(n0, pow1));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n1, pow0, ft_iterative_power(n1, pow0));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n1, pow1, ft_iterative_power(n1, pow1));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n2, pow1, ft_iterative_power(n2, pow1));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", nt, pow1, ft_iterative_power(nt, pow1));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n2, pow3, ft_iterative_power(n2, pow3));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n3, pow4, ft_iterative_power(n3, pow4));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n5, pow2, ft_iterative_power(n5, pow2));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n4, powt, ft_iterative_power(n4, powt));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", n5, pow5, ft_iterative_power(n5, pow5));
	printf("\t----------------------------------------------\n");
    printf("\tPotencia de %d amb exponent %d es: %d\n", nt, powt, ft_iterative_power(nt, powt));
	printf("\t----------------------------------------------\n\n");
}
