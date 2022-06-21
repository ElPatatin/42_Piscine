#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

bool	ft_is_char_printable(char c)
{
	return (c >= 31 && c <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	unsigned int	m;

	i = 0;
	while (true)
	{
		m = str[i];
		if (m == '\0')
			break ;
		if (ft_is_char_printable(m))
			ft_write(m);
		else
		{
			ft_write('\\');
			ft_write("0123456789abcdef"[m / 16]);
			ft_write("0123456789abcdef"[m % 16]);
		}
		i++;
	}
}
