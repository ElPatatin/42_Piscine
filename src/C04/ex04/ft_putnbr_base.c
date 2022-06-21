#include <limits.h>
#include <unistd.h>

static int  ft_cbase(char *s)
{
	int		i;
	int		j;
	int		bytes;
	char	*tmp;
	
	i = 0;
	tmp = s;
	while (s[i])
	{
		bytes = 0;
		j = i;
		while (tmp[j])
		{	
			if (s[i] == tmp[j])
				++bytes;
			if (bytes > 1)
				return (0);
			j++;
		}
		if (s[i] == '+' || s[i] == '-')
			return (0);
		++i;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
    unsigned int    i;

    i = ft_cbase(base);
    if (!base || i <= 1)
    return ;
	if (nbr < 0)
	{
		if (i < 10)
		{
			write(STDOUT_FILENO, "-", sizeof(char) * 1);
			nbr = -nbr;
		}
		else if (i > 10 && i <= 16)
			nbr = UINT_MAX + nbr + 1;
	}
	if (nbr >= i)
		ft_putnbr(nbr / i, base);
	write(STDOUT_FILENO, "0123456789ABCDEF"[nbr % i], sizeof(char) * 1);
}