/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:22:29 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/08 14:02:57 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*prev;
	t_list	*temp;

	prev = *alst;
	while (prev)
	{
		temp = prev->next;
		ft_lstdelone(&prev, del);
		prev = temp;
	}
	*alst = NULL;
}
