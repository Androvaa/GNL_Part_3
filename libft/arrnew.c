/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:32:12 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/06 14:14:48 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**arrnew(int size)
{
	char **array;

	if (!(array = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	array[size + 1] = NULL;
	return (array);
}
