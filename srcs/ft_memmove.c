/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:37:19 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/07 15:56:29 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long	i;
	unsigned char	*pdst;
	unsigned char	*psrc;
	unsigned char	*temp;

	i = 0;
	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	temp = malloc(sizeof(unsigned char) * (len + 1));
	while (i < len)
	{
		temp[i] = psrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		pdst[i] = temp[i];
		i++;
	}
	free(temp);
	return (dst);
}
