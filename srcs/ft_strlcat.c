/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:29:40 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/07 20:01:26 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned long	i;
	int				taille;
	size_t			total;

	i = 0;
	taille = 0;
	total = ft_strlen(dest) + ft_strlen(src);
	while (dest[taille] != '\0')
	{
		taille += 1;
	}
	if (taille > 0)
	{
		while (src[i] != '\0' && i < size)
		{
			dest[taille] = src[i];
			taille += 1;
			i += 1;
		}
		dest[taille] = '\0';
	}
	return (total);
}
