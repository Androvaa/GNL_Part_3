/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 12:35:01 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/19 14:57:37 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	val;
	size_t			i;

	str = (unsigned char *)b;
	val = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
