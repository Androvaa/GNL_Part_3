/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 08:43:18 by nmatutoa          #+#    #+#             */
/*   Updated: 2017/11/14 14:43:26 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *mem;

	if (size == 0)
		return (NULL);
	if (!(mem = (unsigned char*)malloc(sizeof(char) * (size))))
		return (NULL);
	mem = ft_memset(mem, 0, size);
	return (mem);
}
