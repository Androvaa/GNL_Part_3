/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:56:23 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/23 15:30:48 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putendl(char const *s)
{
	int	count;

	count = 0;
	count = ft_putstr(s);
	count += ft_putchar('\n');
	return (count);
}
