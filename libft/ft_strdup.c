/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 15:35:24 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/09/16 15:05:23 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
    int     i;

    i = 0;
	if (src == NULL)
		return (NULL);
	if (!(str = ft_strnew(ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
	    i++;
	}
	return (str);
}
