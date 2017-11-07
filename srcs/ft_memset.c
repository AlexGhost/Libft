/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:57:04 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/07 11:20:59 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < len)
	{
		*ptr = c;
		ptr++;
		i++;
	}
	return (b);
}
