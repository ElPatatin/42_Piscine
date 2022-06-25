#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned int	m;

	i = 0;
	while (str[i])
	{
		m = str[i];
		if (m >= 31 && m <= 126)
			write(STDOUT_FILENO, &m, sizeof(char) * 1);
		else
		{
			write(STDOUT_FILENO, "\\", sizeof(char) * 1);
			write(STDOUT_FILENO, "0123456789abcdef"[m / 16], sizeof(char) * 1);
			write(STDOUT_FILENO, "0123456789abcdef"[m % 16], sizeof(char) * 1);
		}
		++i;
	}
}
