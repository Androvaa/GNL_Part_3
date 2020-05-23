/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 09:56:38 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/25 10:51:33 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*haystack;
	char	*needle;
	int		i;
	int		j;

	haystack = (char *)big;
	needle = (char *)little;
	i = 0;
	j = 0;
	if (*needle == '\0')
		return (haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (j == (int)ft_strlen(needle))
			return (&haystack[i - j + 1]);
		i++;
	}
	return (NULL);
}
