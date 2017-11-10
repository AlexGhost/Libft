/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:25:29 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/10 11:58:14 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int taille;

	taille = 0;
	while (to_find[taille] != '\0')
	{
		taille += 1;
	}
	if (taille == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (j == taille - 1)
				return (str + i);
			j += 1;
		}
		j = 0;
		i += 1;
	}
	return (NULL);
}
