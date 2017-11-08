/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:34:42 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/08 19:01:35 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	j--;
	while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
		str[j--] = '\0';
	return (str);
}
