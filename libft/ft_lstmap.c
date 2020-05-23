/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:17:35 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/08 14:03:36 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*prev;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(lst->content, lst->content_size);
	if (!new)
		return (NULL);
	new = f(lst);
	prev = new;
	while (lst->next)
	{
		prev->next = f(lst->next);
		prev = prev->next;
		lst = lst->next;
	}
	return (new);
}
