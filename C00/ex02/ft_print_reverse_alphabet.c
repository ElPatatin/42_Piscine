/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:58:48 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/07/05 12:58:49 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lt;

	lt = 'z';
	while (lt >= 'a')
	{
		write(STDOUT_FILENO, &lt, sizeof(char));
		lt--;
	}
	write(STDOUT_FILENO, "\n", sizeof(char));
}
