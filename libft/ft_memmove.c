/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 12:37:11 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/25 11:20:39 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	int				i;
	int				length;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	length = (int)len - 1;
	while (length >= 0)
	{
		if (source < dest)
			dest[i + length] = source[i + length];
		else
		{
			dest[i] = source[i];
			i++;
		}
		length--;
	}
	dst = (void *)dest;
	return (dst);
}
