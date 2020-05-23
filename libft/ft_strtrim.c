/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:36:47 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/28 10:11:35 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (is_space(s[i]) && s[i])
		i++;
	while (is_space(s[j]) && s[j])
		j--;
	if (i == ft_strlen(s))
		return (ft_strsub(s, i, 0));
	if (i == 0 && j == ft_strlen(s) - 1)
		return (ft_strdup((char *)s));
	return (ft_strsub(s, i, j - i + 1));
}
