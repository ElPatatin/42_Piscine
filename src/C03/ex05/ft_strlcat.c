/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:40:24 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/05/20 12:33:28 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int  ft_strlen(const char *s)
{
	unsigned int    i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


unsigned int	ft_strlcat(char *dest, const char *src, unsigned int dstsize)
{
	unsigned int	src_s;
	unsigned int	dest_s;
	unsigned int	i;

	src_s = ft_strlen(src);
	dest_s = ft_strlen(dest);
	i = 0;
	if (dstsize == 0)
		return (src_s);
	if (dstsize <= dest_s)
		return (dstsize + src_s);
	while (dstsize && (--dstsize - dest_s) && src[i])
	{
		dest[dest_s + i] = src[i];
		i++;
	}
	dest[dest_s + i] = '\0';
	return (src_s + dest_s);
}
