#include "ft_stock_str.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!dst)
		return (NULL);
	while (s1[i++])
		dst[i] = s1[i];
	dst[i] = '\0';
	return (dst);
}

struct	s_stock_str	*ft_strs_to_tab(int ac,char **av)
{
	t_stock_str	*dst;
	size_t		i;

	i = 0;
	dst = (char *)malloc(sizeof(t_stock_str) * ac + 1);
	if (!dst)
		return (NULL);
	while (i++ < ac)
	{
		dst[i].size = ft_strlen(av[i]);
		dst[i].str = av[i];
		dst[i].copy = ft_strdup(av[i]);
		if (!dst)
		{	
			while (dst[i--])
			{
				free(dst[i]->s_stock_str[i]);
				free(dst[i]);
			}
			*dst = NULL;
			return (dst);
		}
	}
	dst[i].str = 0;
	return (dst);
}