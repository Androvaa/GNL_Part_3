/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 10:44:59 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/27 08:41:15 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	x;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		if (source[i] == x)
		{
			i++;
			return (&dest[i]);
		}
		i++;
	}
	return (NULL);
}
