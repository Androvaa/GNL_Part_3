/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 09:53:02 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/27 13:41:50 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	get_char_params(va_list list)
{
	char	param;

	param = va_arg(list, int);
	return (param);
}

char	*get_str_params(va_list list)
{
	char	*param;

	param = va_arg(list, char *);
	if (param == NULL)
		return (NULL);
	return (param);
}

int		get_int_params(va_list list)
{
	long int	param;

	param = va_arg(list, int);
	return (param);
}

int		get_unsigned_params(va_list list)
{
	int	param;

	param = va_arg(list, unsigned int);
	return (param);
}

void	*get_void_params(va_list list)
{
	void	*param;

	param = va_arg(list, void *);
	return (param);
}
