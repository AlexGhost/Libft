/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:55:03 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/08 14:58:26 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
