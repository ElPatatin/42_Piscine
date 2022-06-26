#ifndef FT_TAIL_H
# define FT_TAIL_H

# define NOPERM		(char *)" : Permission denied\n"
# define NOPDIR		(char *)" : Is a directory\n"
# define NOEXST		(char *)" : File or directory does not exist\n"
# define NOREAD		(char *)"ft_cat: Cannot read file.\n"
# define BUF_SIZE	(int)42

# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdlib.h>

typedef unsigned int unt;

// Sources error handeling
int	ft_error(char *s0, char *str);
int	ft_check_param(char *s1, char *s2);

// Utils 1
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_atoi(char *str);
int	ft_isdigit(char *str);
int	ft_strcmp(char *s1, char *s2);

// Utils 2
int		ft_strlen(char *s);
void	ft_printline(char *str, int n);
void	ft_print_pname(char *fname);
void	ft_print_index(char *str, int index);
void	ft_print_last_line(char *str, char *fname, unt n);

#endif
