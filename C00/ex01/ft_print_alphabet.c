/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:58:40 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/05 12:58:41 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lt;

	lt = 'a';
	while (lt <= 'z')
	{
		write(STDOUT_FILENO, &lt, sizeof(char));
		lt++;
	}
	write(STDOUT_FILENO, "\n", sizeof(char));
}
