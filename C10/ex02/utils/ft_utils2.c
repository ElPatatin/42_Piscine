#include "../inc/ft_tail.h"

int	ft_strlen(char *s)
{
	unt	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

void    ft_printline(char *str, int n)
{
	int i;
	int fd;

	i = 0;
	fd = open(str, O_RDONLY);

	str = (char *)malloc(sizeof(char));
	if (!str)
		return ;
	while(fd > -1 && ((read(fd, &str[i], 1))) > 0)
		i++;
	i = 0;
	while(str[i])
		i++;
	i -= n;
	while(str[i])
		write(1, &str[i++], 1);
}

void	ft_print_pname(char *fname)
{
	ft_putstr("==>");
	ft_putstr(fname);
	ft_putstr(" <==\n");
}

void	ft_print_index(char *str, int index)
{
	while(str[index])
		write(1, &str[index++], 1);
}

void	ft_print_last_line(char *str, char *fname, unt n)
{
	int i;
	int last;
	int idx;
	int fd;

	i = 0;
	last = 0;
	fd = open(str, O_RDONLY);
	str = (char *)malloc(sizeof(char));
	if (!str)
		return ;
	while(read(fd, &str[i], 1))
		i++;
	i = 0;
	while(str[i])
		i++;
	while(i-- && last < 11)
		if(str[i] == '\n')
			last++;
	idx = i + 2;
	if(n > 2)
	{
		ft_print_pname(fname);
		ft_print_index(str, idx);
	}
	else
	ft_print_index(str, idx);
}