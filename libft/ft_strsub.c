/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 08:32:50 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/16 11:54:39 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
    size_t  i;

	if (!s)
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
    i = 0;
	while (start < ft_strlen(s) && s[start] && i < len)
	{
		str[i] = s[start];
		start++;
        i++;
	}
	return (str);
}
