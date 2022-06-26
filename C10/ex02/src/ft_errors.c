#include "../inc/ft_tail.h"

// Función de control de errores -> man errno
// EACCES: permisos denegados.
// EISDIR: es un directorio.
// ENOENT: no existe dicho archivo o directorio.

int	ft_error(char *s0, char *str)
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

int	ft_check_param(char *s1, char *s2)
{
	int	i;

	if (ft_strcmp(s1, "-c") == 0 && ft_isdigit(s2) == 1)
		i = 1;
	if (ft_strcmp(s1, "-c") == 0 && ft_isdigit(s2) == 0)
		i = 0;
	return( i);
}