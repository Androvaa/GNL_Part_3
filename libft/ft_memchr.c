/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:08:34 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/18 12:34:21 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	find;
	size_t			i;

	str = (unsigned char *)s;
	find = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == find)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
