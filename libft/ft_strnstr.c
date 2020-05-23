/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 13:20:31 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/27 08:42:48 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*haystack;
	char	*needle;

	i = 0;
	j = 0;
	haystack = (char *)big;
	needle = (char *)little;
	if (*needle == '\0')
		return (haystack);
	while (i < len && haystack[i])
	{
		while (haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
			if (j == ft_strlen(needle))
				return (&haystack[i - j]);
		}
		i++;
	}
	return (NULL);
}
