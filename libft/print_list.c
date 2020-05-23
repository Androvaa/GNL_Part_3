/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:52:27 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/08 10:46:42 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_list(t_list *start)
{
	t_list	*current;

	current = start;
	while (current != NULL)
	{
		ft_putendl(current->content);
		current = current->next;
	}
}
