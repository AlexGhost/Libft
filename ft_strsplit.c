/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:21:21 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/11 22:13:03 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int t;
	int i;
	int space;

	i = 0;
	t = 0;
	space = 0;
	if (!s[0])
		return (0);
	if (s[0] != c)
		t += 1;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && space == 1)
		{
			t += 1;
			space = 0;
		}
		else if (s[i] == c)
			space = 1;
		else
			space = 0;
		i += 1;
	}
	return (t);
}

static int	charequ(char t, char c)
{
	if (c == t)
		return (1);
	return (0);
}

static void	ft_stock_char(char const *str, char **res, char c)
{
	int i[2];
	int z;

	i[0] = 0;
	i[1] = 0;
	z = 0;
	while (str[i[0]])
	{
		if (charequ(str[i[0]], c) && !i[1])
			i[1] += 0;
		else if (charequ(str[i[0]], c))
		{
			res[z][i[1]] = '\0';
			i[1] = 0;
			z += 1;
		}
		else
		{
			res[z][i[1]] = str[i[0]];
			i[1] += 1;
		}
		i[0] += 1;
	}
	if (i[1] != 0)
		res[z][i[1]] = '\0';
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	words = countwords(s, c);
	tab = malloc(sizeof(char*) * (words + 30));
	if (!tab)
		return (NULL);
	while (i < words)
	{
		tab[i] = malloc(sizeof(char) * ft_strlen((char*)s));
		if (!tab[i])
			return (NULL);
		i++;
	}
	i = 0;
	while (i < words)
		i++;
	tab[i] = 0;
	ft_stock_char(s, tab, c);
	return (tab);
}
