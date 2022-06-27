/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:30:46 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/06/27 18:30:48 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	const char	*str;

	str = "0123456789ABCDEF";
	i = ft_cbase(base);
	if (!base || i <= 1)
		return ;
	if (nbr < 0)
	{
		if (i <= 10)
		{
			write(STDOUT_FILENO, "-", sizeof(char));
			nbr = -nbr;
		}
		else if (i > 10)
			nbr = UINT_MAX + nbr + 1;
	}
	if (nbr >= i)
		ft_putnbr_base(nbr / i, base);
	write(STDOUT_FILENO, &str[nbr % i], sizeof(char));
}
