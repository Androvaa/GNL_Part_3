/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:48:02 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/28 14:49:45 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_putstr(const char *s)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	if (s == NULL || !s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i] != '\0')
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}
