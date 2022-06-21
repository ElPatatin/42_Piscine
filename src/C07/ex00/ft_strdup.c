#include <stdlib.h>

 static char	*ft_strcpy(char *dest,char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	while (src[i++]);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	return (ft_strcpy(dest, src));
}
