/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:27:53 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/28 10:49:46 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(new = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
