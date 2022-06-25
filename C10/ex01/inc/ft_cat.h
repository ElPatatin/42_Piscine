#ifndef FT_CAT_H
# define FT_CAT_H

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

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_strlen(char *s);

#endif
