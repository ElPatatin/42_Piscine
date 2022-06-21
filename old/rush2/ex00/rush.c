/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 09:39:44 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/17 10:28:01 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

long long	ft_atoll(const char *str);

void	ft_write(int a)
{
	write(1, &a, 1);
}

/*int	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}*/

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
//	char s1[ft_strlen(argv)];
	
	if (argc > 3 || argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_write(argv[i][j]);
			j++;
		}
		ft_write('\n');
		i++;
	}
	return (0);
}
