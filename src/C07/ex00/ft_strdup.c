#include <stdio.h>
#include <stdlib.h>

// Uso la función strcpy para copiar a un puntero de destino la string después de alocar la memoria

char	*ft_strcpy(char *dest,char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// Creo mi función strdup 
// Lo que hace es copiar una string a un puntero de esa string, 
// preparar la memoria con malloc y devolver dicho puntero

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	return (ft_strcpy(dest, src));
}
