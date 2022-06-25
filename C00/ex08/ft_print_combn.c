#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_init_tab(char *tab, int len)
{
	int	i;

	i = 0;
	while (i != len)
	{
		tab[i] = '0';
		i++;
	}
}

int 	ft_incr(char *str, int len)
{
	int	i;
	int	j;

	i = len - 1;
	j = len - 1;
	if (str[i] == '9')
	{
		while (i >= 0 && str[i] == '9')
			i--;
		if (i >= 0)
		{
			while (j != i && str[j] == '9')
			{
				str[j] = '0';
				j--;
			}
			str[i]++;
			return (1);
		}
		return (0);
	}
	else
		str[i]++;
	return (1);
}

int		ft_check(char *str, int len)
{
	int	i;
	int	n;

	n = 1;
	i = 0;
	while (1)
	{
		if (str[i] >= str[i + n] && (i + n) < len)
			return (0);
		else if ((i + n + 1) <= (len - 1))
			n++;
		else if ((i + n) == (len - 1) && i != (len - 1))
		{
			i++;
			n = 1;
		}
		else if (i == (len - 1))
			return (1);
	}
}

void	ft_print_combn(int n)
{
	char	str[n];
	int		i;

	i = 1;
	ft_init_tab(str, n);
	while (i)
	{
		i = ft_incr(str, n);
		if (ft_check(str, n))
		{
			ft_putstr(str);
			write(1, ", ", 2);
		}
	}
}

int	main(void)
{
	int len;

	len = 2;
	ft_print_combn(len);
	write(1, "\n", 1);
	return (0);
}
