/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:43:19 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/10 13:13:23 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str_1 = "HRE!@#$%^&*()";
	char	*str_2 = "bbeb\ngHHHcej\tbveb";
	char	*str_3 = "";
	int		res_1;
	int		res_2;
	int		res_3;

	res_1 = ft_str_is_printable(str_1);
	res_2 = ft_str_is_printable(str_2);
	res_3 = ft_str_is_printable(str_3);

	printf("---------------------TEST 1--------------------\n");
	printf("%s \n", str_1);
	if (res_1 == 1)
		printf("Test passed! is_printable = %d \n", res_1);
	else
		printf("Test failed! Expected: 1 | Obtained: %d \n", res_1);
	printf("\n");

	printf("---------------------TEST 2--------------------\n");
	printf("%s \n", str_2);
	if (res_2 == 0)
		printf("Test passed! is_printable = %d \n", res_2);
	else
		printf("Test failed! Expected: 0 | Obtained: %d \n", res_2);
	printf("\n");

	printf("---------------------TEST 3--------------------\n");
	printf("%s \n", str_3);
	if (res_3 == 1)
		printf("Test passed! is_printable = %d \n", res_3);
	else
		printf("Test failed! Expected: 1 | Obtained: %d \n", res_3);
	printf("\n");
	return (0);
}
