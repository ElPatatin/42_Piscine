/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:30:56 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/06/27 18:30:57 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_cbase(char *s)
{
	int		i;
	int		j;
	int		bytes;
	char	*tmp;

	i = 0;
	tmp = s;
	while (s[i])
	{
		bytes = 0;
		j = i;
		while (tmp[j])
		{	
			if (s[i] == tmp[j])
				++bytes;
			if (bytes > 1)
				return (0);
			j++;
		}
		if (s[i] == '+' || s[i] == '-')
			return (0);
		++i;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	negative;
	int	lbase;

	res = 0;
	negative = 1;
	lbase = ft_cbase(base);
	if (!*base || lbase <= 1)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res *= lbase + (*str - '0');
		str++;
	}
	return (res * negative);
}
