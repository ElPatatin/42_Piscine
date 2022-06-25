/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:39:08 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/15 14:17:21 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

int	ft_is_prime_verifier(int nb);

int	main(void)
{
	int	nb;
	int	next_prime;
	int	i;

	printf("Please input a number of type int to test your function: ");
	scanf("%d", &nb);
	next_prime = ft_find_next_prime(nb);
	printf("Next prime = %d\n", next_prime);
	i = nb;
	if (i == next_prime && ft_is_prime_verifier(i) == 1)
	{
		printf("Test passed :D | The next prime greater or equal than %d is %d\n", nb, next_prime);
		return (0);
	}
	while (i < next_prime)
	{
		if (ft_is_prime_verifier(i) == 1)
		{
			printf("Test failed :S | The next prime greater or equal than %d is not %d", nb, next_prime);
			return (0);
		}
		i++;
	}
	printf("Test passed :D | The next prime greater or equal than %d is %d\n", nb, next_prime);
	return (0);
}
