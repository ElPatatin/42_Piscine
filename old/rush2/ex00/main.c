/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:29:06 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/17 09:35:46 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned long long	ft_atoll(const char *str);

void	ft_write(int a)	
{
	write(1, &a, 1);
}

int	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_clean(char *str)
{
	int i;
	int j;
	char arr[ft_strlen(str)];
	char *temp;

	temp = arr;
	i = 0;
	j = 0;
	while (str[i] == 0)
		i++;
	while (str[i] != '\0')
	{
		temp[j] = str[i];
		i++;
		j++;
	}
	temp[j] = '\0';
	return (ft_strcpy(str, temp));
}

int	main(int argc, char *argv[])
{
	if (argc > 3 || argc < 2)
    {
        write(1, "Not the required arguments\n", 27);
        exit (1);
    }
	return (0);	
}
