/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:45:03 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/10 14:28:55 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*cat;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	if (!str)
		return (NULL);
	cat = ft_strcat((char*)s1, (char*)s2);
	while (k < i + j)
	{
		str[k] = cat[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
