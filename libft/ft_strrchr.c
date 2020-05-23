/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 10:21:18 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/27 08:42:32 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	find;

	i = ft_strlen(s);
	find = (char)c;
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
