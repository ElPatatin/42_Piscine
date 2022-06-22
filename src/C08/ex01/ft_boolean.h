#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		(int)1
# define FALSE		(int)0
# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)
# define SUCCESS	(int)0
# define EVEN_MSG	(char *)"I have an even number of arguments.\n"
# define ODD_MSG	(char *)"I have an odd number of arguments.\n"

typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif