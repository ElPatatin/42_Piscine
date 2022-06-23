#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stock_str
{
    int		size;
    char	*str;
	char	*copy;
}			t_stock_str;

struct	s_stock_str	*ft_strs_to_tab(int ac,char **av);
char	*ft_strdup(const char *s1);

void    ft_putchar(char c);
void	ft_putstr(char *str);
void    ft_putnbr(int nbr);
int		ft_strlen(char *s);
void    ft_swap(int *a, int *b);

void    ft_show_tab(struct s_stock_str *par);

#endif