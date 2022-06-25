/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*        ii                                          +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 09:45:36 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/16 10:46:38 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_strings(int num, char **s)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < num)
	{
		j = i;
		while (j > 0 && ft_strcmp(s[j - 1], s[j]) > 0)
		{
			temp = s[j - 1];
			s[j - 1] = s[j];
			s[j] = temp;
			j--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_sort_strings(argc - 1, argv + 1);
			ft_write(argv[i][j]);
			j++;
		}
		ft_write('\n');
		i++;
	}
	return (0);
}

// #include <unistd.h>

// static void	ft_swap(char **s1, char **s2)
// {
// 	char	*tmp;

// 	tmp = *s1;
// 	*s1 = *s2;
// 	*s2 = tmp;
// }

// static int	ft_strcmp(char *s1, char *s2)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (s1[i] && s2[i])
// 	{
// 		if (s1[i] != s2[i])
// 			return (s1[i] - s2[i]);
// 		++i;
// 	}
// 	return (0);
// }

// static void	ft_print(int i, char **s)
// {
// 	int	idx;
// 	int	subidx;

// 	idx = 1;
// 	while (idx++ < i)
// 	{
// 		subidx = 0;
// 		while (s[idx][subidx++])
// 			write(STDOUT_FILENO, &s[idx][subidx], sizeof(char) * 1);
// 		write(STDOUT_FILENO, "\n", sizeof(char) * 1);
// 	}
// }

// int main(int argc, char **argv)
// {
//     int i;

// 	i = 1;
//     if (argc >= 1)
// 		while (i < argc - 1)
// 		{
// 			if (ft_strcmp(argv[i + 1], argv[i]) < 0)
// 			{
// 				ft_swap(&argv[i], &argv[i + 1]);
// 				++i;
// 			}
// 			else
// 				++i;
// 		}
// 	ft_print(argc, argv);
// 	return (0);
// }