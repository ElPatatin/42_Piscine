/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:28:42 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/08 11:37:38 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod();

int	main(void)
{
	int	a;
	int	b;
	int res_div;
	int res_mod;
	int	*div;
	int	*mod;

	a = 8;
	b = 4;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("----------------TEST 1---------------\n");
	if (*div == 2 && *mod == 0)
		printf("Test passed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	else
		printf("Test failed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	printf("\n");
	
	a = 9;
	b = 2;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("----------------TEST 2---------------\n");
	if (*div == 4 && *mod == 1)
		printf("Test passed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	else
		printf("Test failed: %d / %d || div = %d | mod = %d \n", a, b, res_div, res_mod);
	
	a = 8;
	b = 0;
	div = &res_div;
	mod = &res_mod;
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("----------------TEST 3---------------\n");
	printf("Test passed! No return. (Moulinette does not require this test)");	
	return (0);	
}
