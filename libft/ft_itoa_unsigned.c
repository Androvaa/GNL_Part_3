/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:55:52 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/25 11:49:09 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	num_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char				*ft_itoa_unsigned(unsigned int n)
{
	int		len;
	char	*str;

	if (n == 0)
		len = 1;
	else
		len = num_len(n);
	if (!len)
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
	len--;
	while (len >= 0)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (str);
}
