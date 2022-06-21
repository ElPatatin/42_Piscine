/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:11:03 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/08 14:11:13 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "This amazing string is 42 characters long.";
	char *str_test = "This amazing string is 42 characters long.";
	int	len;

	printf("------------------TEST 1-------------------\n");
	while(*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
	
	len = ft_strlen(str_test);
	if (len == 42)
		printf("Test passed! The input string is %d char in length\n", len);
	else
		printf("Test failed! The input string is %d char in length\n", len);
	return (0);
}
