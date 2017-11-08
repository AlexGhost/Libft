/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:40:22 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/08 14:49:27 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		taille;
	int		i;
	char	*str;

	taille = 0;
	i = 0;
	while (s[taille])
		taille++;
	str = malloc(sizeof(char) * taille);
	if (!str)
		return (NULL);
	while (i < taille)
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
