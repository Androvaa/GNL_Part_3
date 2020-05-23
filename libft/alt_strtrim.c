/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:13:46 by nmatutoa          #+#    #+#             */
/*   Updated: 2017/12/04 14:57:04 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alt_strtrim(char const *s, char c)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (s[i] == c && s[i])
		i++;
	if (!s[i])
		return (ft_strsub(s, i, 0));
	while (s[j] == c && s[j])
		j--;
	if (!i && j == ft_strlen(s) - 1)
		return (ft_strdup((char *)s));
	len = j - i;
	return (ft_strsub(s, i, len + 1));
}
