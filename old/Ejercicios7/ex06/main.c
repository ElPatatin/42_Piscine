/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:47:30 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/15 10:53:16 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	/*int	p2 = 2;
	int p3 = 3;
	int p5 = 5;
	int p7 = 7;
	int p11 = 11;
	int pa = 7351;
	int pb = 853;
	int pc = 33391;

	int n0 = 0;
	int n1 = 1;
	int n4 = 4;
	int n9 = 9;
	int nt = 10;
	int nc = 100;
	int nm = 1000;
	int n255 = 255;
	int nk = 1048;

	printf("----------------------------------------------");
	printf("\tMis Primos");
	printf("----------------------------------------------");
	return (0);*/

	int	nb;

	printf("-------------------------------TEST 1---------------------------------\n");
	nb = -1;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 0)
		printf("Test passed :D | %d is not a prime number", nb);
	else
		printf("Test failed :S | %d is not a prime number, should return 0", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 2---------------------------------\n");
	nb = 0;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 0)
		printf("Test passed :D | %d is not a prime number", nb);
	else
		printf("Test failed :S | %d is not a prime number, should return 0", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 3---------------------------------\n");
	nb = 2;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 1)
		printf("Test passed :D | %d is a prime number", nb);
	else
		printf("Test failed :S | %d is a prime number, should return 1", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 4---------------------------------\n");
	nb = 10000000;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 0)
		printf("Test passed :D | %d is not a prime number", nb);
	else
		printf("Test failed :S | %d is not a prime number, should return 0", nb);
	printf("\n-----------------------------------------------------------------------\n");

	printf("-------------------------------TEST 5---------------------------------\n");
	nb = 23;
	printf("nb = %d \n", nb);
	if (ft_is_prime(nb) == 1)
		printf("Test passed :D | %d is a prime number", nb);
	else
		printf("Test failed :S | %d is a prime number, should return 23", nb);
	printf("\n-----------------------------------------------------------------------\n");

	 printf("-------------------------------TEST 4---------------------------------\n");
    nb = 2000000012;
    printf("nb = %d \n", nb);
    if (ft_is_prime(nb) == 0)
        printf("Test passed :D | %d is not a prime number", nb);
    else
        printf("Test failed :S | %d is not a prime number, should return 0", nb);
    printf("\n-----------------------------------------------------------------------\n");


	return (0);
}
