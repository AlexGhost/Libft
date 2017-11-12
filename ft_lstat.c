/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:01:06 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/12 21:03:03 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *lst, unsigned int nbr)
{
	if (nbr == 0)
		return (lst);
	else if (lst->next != 0 && nbr > 0)
		return (ft_lstat(lst->next, nbr - 1));
	else
		return (0);
}
