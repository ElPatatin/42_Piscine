#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers1(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		ft_write(i);
		i++;
	}
	ft_write('\n');
}

void	ft_print_numbers2(void)
{
	write(1, "0123456789\n", 11);
}

void	ft_print_reverse_numbers(void)
{
	char	i;

	i = '9';
	while (i >= '0')
	{
		ft_write(i);
		i--;
	}
	ft_write('\n');
}

int	main(void)
{
	ft_print_numbers1();
	ft_print_numbers2();
	ft_print_reverse_numbers();
	return (0);
}
