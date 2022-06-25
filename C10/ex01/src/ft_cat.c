#include "../inc/ft_cat.h"

// Función de control de errores -> man errno
// EACCES: permisos denegados.
// EISDIR: es un directorio.
// ENOENT: no existe dicho archivo o directorio.

static	int	ft_error(char *s0, char *str)
{
	if (errno == EACCES)
	{
		ft_putstr(s0);
		ft_putchar(':');
		ft_putstr(str);
		ft_putstr(NOPERM);
		return (1);
	}
	else if (errno == EISDIR)
	{
		ft_putstr(s0);
		ft_putchar(':');
		ft_putstr(str);
		ft_putstr(NOPDIR);
		return (1);
	}
	else if (errno == ENOENT)
	{
		ft_putstr(s0);
		ft_putchar(':');
		ft_putstr(str);
		ft_putstr(NOEXST);
		return (1);
	}
	return (0);
}

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

static void	ft_stdout(char *s0, char *str)
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
}
