#include "../inc/ft_tail.h"

static void	ft_stdin(void)
{
	char	buff[BUF_SIZE + 1];
	int		i;

	i = 0;
	while ((i = read(0, &buff, 1)))
	{
		buff[i] = '\0';
		ft_putstr(buff);
	}
}


int	main(int argc, char **argv)
{
	int	i;
	int	fd;
	
	i = 0;
	if (argc <= 1)
		ft_stdin();
	while (i < argc)
	{
		if((ft_check_param(argv[1], argv[2]) == 0))
		{
			ft_error(argv[0], argv[2]);
			return(0);
		}
		if((fd = open(argv[i], O_RDONLY) == -1))
		{
			if(errno == 2)
            	ft_error(argv[0], argv[i]);
		}
		else
			ft_print_last_line(argv[i], argv[i], argc);
		++i;
	}
}

/*static void	ft_stdout(char *s0, char *str)
{
	char	buff[BUF_SIZE + 1];
	ssize_t	bytes;
	int		fd;
	int		idx;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		ft_error(s0, str);
	idx = read(fd, buff, BUF_SIZE);
	while (idx)
	{
		buff[idx] = '\0';
		bytes = ft_putstr(buff);
		if (bytes == -1)
			return ;
		idx = read(fd, buff, BUF_SIZE);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	ssize_t	i;

	i = 0;
	if (argc <= 1 || argv[1][0] == '-')
		ft_stdin();
	else
		while (++i < argc)
			ft_stdout(basename(argv[0]), argv[i]);
	ft_putchar('\n');
	return (0);
}*/
