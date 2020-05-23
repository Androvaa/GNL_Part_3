/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 09:35:54 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/27 10:27:29 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		percent_check(const char *str, char **mods)
{
	int		percent;
	char	*p;

	percent = strchr_count((char *)str, '%');
	if (mods[0] == NULL || !mods)
	{
		if (percent == 0)
			return (1);
		if (percent == 1)
			return (0);
	}
	if (percent == 1)
	{
		p = ft_strchr(str, '%');
		if (ft_strncmp(p, mods[0], ft_strlen(mods[0])) == 0)
			return (1);
	}
	return (1);
}
