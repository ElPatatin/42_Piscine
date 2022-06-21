/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:57:49 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/09 15:07:14 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);

int	main(void)
{
	char			*src = "Copycopycopy";
	char			dest[5] = "aaaa";
	char			dest_test[5] = "aaaa";
	unsigned int	i;
	int len;
	int len_test;

	i = 0;
	len = 0;
	len_test = 0;
	ft_strncpy(dest_test, src, sizeof(dest_test));
	ft_strncpy(dest, src, sizeof(dest));
	printf("Expected:\t");
	while (i < sizeof(dest_test))
	{
		printf("%c", dest_test[i]);
		i++;
	}
	printf("\n");
	
	i = 0;
	printf("Obtained:\t");
	while (i < sizeof(dest))
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");
	return (0);
}
