/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 14:10:50 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/26 12:07:15 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len;
	size_t diff;
	size_t i;
	size_t j;

	len = 0;
	i = 0;
	j = 0;
	while (len < size && *dst && *(dst++))
		len++;
	diff = size - len;
	if (!diff)
		return (len + ft_strlen(src));
	while (src[i])
	{
		if (diff != 1)
		{
			dst[j++] = src[i];
			diff--;
		}
		i++;
		len++;
	}
	dst[j] = '\0';
	return (len);
}
