/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttail.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:36:34 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/11 18:42:58 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lsttail(t_list **alst, t_list *new)
{
	t_list		*curlist;

	curlist = *alst;
	while (curlist->next != NULL)
	{
		curlist = curlist->next;
	}
	curlist->next = new;
}
