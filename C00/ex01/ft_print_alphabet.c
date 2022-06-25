#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet1(void)
{
	char	lt;

	lt = 'a';
	while (lt <= 'z')
	{
		ft_write(lt);
		lt++;
	}
	ft_write('\n');
}

void	ft_print_alphabet2(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}

int	main(void)
{
	ft_print_alphabet1();
	ft_print_alphabet2();

	return (0);
}
