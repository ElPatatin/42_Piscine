#include <stdlib.h>

static size_t  ft_strlen(char *s)
{
    ssize_t i;

    i = -1;
    while (s[++i]);
    return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*ptr;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * i + 1);
	if (!(dst && s1 && s2))
		return (NULL);
	ptr = dst;
	while (*s1 != '\0')
		*dst++ = *s1++;
	while (*s2 != '\0')
		*dst++ = *s2++;
	*dst = '\0';
	return (ptr);
}