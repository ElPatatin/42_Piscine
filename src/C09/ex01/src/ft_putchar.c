#include "../inc/ft.h"

void    ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}