#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet1(void)
{
	char	lt;

	lt = 'z';
	while (lt >= 'a')
	{
		ft_write(lt);
		lt--;
	}
	ft_write('\n');
}

void	ft_print_reverse_alphabet2(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
}

int main(void)
{
	ft_print_reverse_alphabet1();
	ft_print_reverse_alphabet2();
	return (0);
}
