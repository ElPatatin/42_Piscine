#include "../inc/ft.h"

static int	ft_check(char *op)
{
	char	*is_valid;
	ssize_t	i;

	is_valid = "+-/*%";
	if (op[0] && op[1])
		return (-1);
	i = -1;
	while (++i < 5)
		if (is_valid[i] == op[0])
			return (i);
	return (-1);
}

static void	ft_assing(void (*list[5])(int, int))
{
	list[0] = &addition;
	list[1] = &substraction;
	list[2] = &division;
	list[3] = &multiplication;
	list[4] = &modular;
}

int	main(int argc, char **argv)
{
	void	(*ops[5])(int, int);
	int		idx;

	if (argc == 4)
	{
		ft_assing(ops);
		idx = ft_check(argv[2]);
		if (idx == -1)
		{
			ft_putstr("0\n");
			return (0);
		}
		ops[idx](ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
	ft_putchar('\n');
	return (0);
}