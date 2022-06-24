/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:43:52 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/06/24 22:43:54 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H

# define NOARG		(char *)"File name missing.\n"
# define TMARG		(char *)"Too many arguments.\n"
# define NOREAD		(char *)"Cannot read file.\n"
# define BUF_SIZE	(int)42

# include <unistd.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>

int	ft_putchar(char c);
ints	ft_putstr(char *s);

#endif
