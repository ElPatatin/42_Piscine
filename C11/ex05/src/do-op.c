#include "../int/ft.h"

static ft_check(char c)
{
	
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	k;
	int		rst;

	if (argc == 4)
	{
		i = ft_atoi(argv[1]);
		j = ft_atoi(argv[3]);
		k = argv[2][0];
		if (k == '+')
			rst = i + j;
		else if (k == '-')
			rst = i - j;
		else if (k == '*')
			rst = i * j;
		else if (k == '/')
			rst = i / j;
		else if (k == '%')
			rst = i % j;
		else
			write(STDOUT_FILENO, "0", sizeof(char));
		printf("%d\n", rst);
	}
	else
		write(STDOUT_FILENO, "\n", sizeof(char));
	return (0);
}