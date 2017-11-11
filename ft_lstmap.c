/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:02:59 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/11 19:01:29 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*newlist;
	t_list		*curlist;

	newlist = (t_list*)malloc(sizeof(t_list));
	if (!newlist)
		return (NULL);
	curlist = lst;
	while (curlist->next != NULL)
	{
		ft_lsttail(&newlist, ft_lstnew(f(curlist)->content, f(curlist)->content_size));
		curlist = curlist->next;
	}
	ft_lsttail(&newlist, ft_lstnew(f(curlist)->content, f(curlist)->content_size));
	return (newlist);
}
