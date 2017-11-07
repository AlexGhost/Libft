/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:21:12 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/07 19:22:31 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char*)s;
	while (ptr[i] != '\0')
		i++;
	i--;
	while (i > 0)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i--;
	}
	return (NULL);
}
