/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:37:29 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/04/16 16:56:08 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	char buff[20];
	ssize_t nr_bytes;

	fd = open("/Users/cpeset-c/Documents/rush2/ex00/numbers.dict", O_RDONLY);
	if (fd == -1)
		exit (1);
	else
	{
		nr_bytes = read(fd, buff, 20);
		if (nr_bytes == 0)
			exit (1);
		else
			printf("El numero de caracteres es de %d, contenido: %s\n", (int)nr_bytes, buff);
	}
	close(fd);
	return (0);
}
