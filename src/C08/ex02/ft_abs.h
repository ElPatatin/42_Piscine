#ifndef FT_ABS_H
# define FT_ABS_H

// Estas librerias declaradas solo las uso para comprobar que la variable
// global declarada esta hecho de forma correcta y funciona.

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define ABS(Value)   (int)(Value) < 0 ? (Value = -Value) : (Value)

// Estas son las variables declaradas para hacer un itoa. Solo las uso
// para comprobar en el main que esta bien declarado la variable glbal.s

char	*ft_itoa(int nbr, int base);
int		ft_nbrlen(int nbr);

#endif