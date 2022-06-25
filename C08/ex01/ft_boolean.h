/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:59:02 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/06/24 22:59:03 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		(int)1
# define FALSE		(int)0
# define EVEN(nbr)	((nbr % 2) == 0 ? TRUE : FALSE)
# define SUCCESS	(int)0
# define EVEN_MSG	(char *)"I have an even number of arguments.\n"
# define ODD_MSG	(char *)"I have an odd number of arguments.\n"

typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
