#ifndef FT_H
# define FT_H

# include <unistd.h>

# define DIVZ	(char *)"Stop : division by zero.\n"
# define MODZ	(char *)"Stop : modulo by zero.\n"

typedef long long	lln

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(lln nbr);
int		ft_strlen(char *s);
int		ft_atoi(char *str);

void	addition(int x, int y);
void	substraction(int x, int y);
void	multiplication(int x, int y);
void	division(int x, int y);
void	modular(int x, int y);

#endif