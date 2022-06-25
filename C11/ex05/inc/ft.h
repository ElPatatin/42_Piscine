#ifndef FT_H
# define FT_H

# include <unistd.h>

# define DIVZ	(char *)"Stop : division by zero."
# define MODZ	(char *)"Stop : modulo by zero."

typedef long long nbr_l;

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(nbr_l nbr);
int		ft_atoi(const char *str);

void	addition(int x, int y);
void	substraction(int x, int y);
void	division(int x, int y);
void	multiplication(int x, int y);
void	modular(int x, int y);

#endif