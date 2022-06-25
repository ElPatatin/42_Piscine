/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:44:04 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/06/24 22:44:06 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_display.h"

static int	ft_errctl(int ac)
{
	if (ac <= 1)
	{
		ft_putstr(NOARG);
		return (0);
	}
	else if (ac == 2)
		return (1);
	else
	{
		ft_putstr(TMARG);
		return (0);
	}
}

int	main(int argc, char **argv)
{
	char	buff[1024];
	ssize_t	bytes;
	int		fd;
	int		idx;

	if (ft_errctl(argc) == 1)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr(NOREAD);
			return (0);
		}
		idx = read(fd, buff, BUF_SIZE);
		while (idx)
		{
			buff[idx] = '\0';
			bytes = ft_putstr(buff);
			if (bytes == -1)
				return (0);
			idx = read(fd, buff, BUF_SIZE);
		}
		close(fd);
	}
	return (0);
}
