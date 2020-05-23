/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:22:22 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/23 14:56:40 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		word_count(const char *str, char c)
{
	int	i;
	int	substring;
	int	count;

	i = 0;
	substring = 0;
	count = 0;
	while (str[i])
	{
		if (substring == 1 && str[i] == c)
			substring = 0;
		if (substring == 0 && str[i] != c)
		{
			substring = 1;
			count++;
		}
		i++;
	}
	return (count);
}
