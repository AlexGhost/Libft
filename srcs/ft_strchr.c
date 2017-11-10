/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:14:03 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/10 11:26:17 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char*)s;
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	if (c == '\0')
		return (ptr + i);
	return (NULL);
}
