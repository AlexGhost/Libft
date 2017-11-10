/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:49:06 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/10 12:28:58 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i += 1;
	}
	return (0);
}
