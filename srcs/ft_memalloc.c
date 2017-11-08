/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:29:02 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/08 11:41:52 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void			*ptr;
	void			**dd;
	unsigned long	i;

	ptr = malloc(sizeof(void) * size);
	if (!ptr)
		return (NULL);
	i = 0;
	dd = ptr;
	while (i < size)
	{
		dd = 0;
		dd++;
		i++;
	}
	return (ptr);
}
