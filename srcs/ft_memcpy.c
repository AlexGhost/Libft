/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:00:29 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/07 15:04:02 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	long	i;
	char	*pdst;
	char	*psrc;

	i = 0;
	pdst = (char*)dst;
	psrc = (char*)src;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
