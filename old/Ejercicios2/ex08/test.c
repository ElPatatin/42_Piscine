#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	init_tab(char *tab, int len)
{
	int i;

	i = 0;
	while (i != len)
	{
		tab[i] = '0';
		i++;
	}
	//tab[len] = '\n';
}

int		incr(char *str, int len)
{
	int i;
	int j;

	i = len - 1;
	j = len - 1;
	if (str[i] == '9')
	{
		while (i >= 0 && str[i] == '9')
		{
			i--;
		}
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

int		good(char *str, int len)
{
	int i;
	int n;

	n = 1;
	i = 0;

	while (1) 
	{
		if (str[i] >= str[i + n] && (i + n) < len)
		{
			return (0);
		}
		else if ((i + n + 1) <= (len - 1))
		{
			n++;
		}
		else if ((i + n) == (len - 1) && i != (len - 1))
		{
			i++;
			n = 1;
		}
		else if (i == (len - 1))
		{
			return (1);
		}
	}
}
void	ft_print_combn(int len)
{
	char str[len];
	int i;

	i = 1;
	init_tab(str, len);

	while (i)
	{
		i = incr(str, len);
		if (good(str, len))
		{
			ft_putstr(str);
			if (str[i])
				write(1, ", ", 2);
			else
				write(1, "\n", 1);
		}
	}
}

int main(void)
{
	int len;

	len = 2;

	ft_print_combn(len);
	return 0;
}
