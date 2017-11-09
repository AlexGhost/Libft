/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:54:53 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/09 17:16:45 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static void		fillstr(int neg, long size, int n, char *str)
{
	int i;

	i = 0;
	if (neg == -1)
	{
		str[i] = '-';
		i++;
	}
	while (size > 0)
	{
		str[i] = (n / size) + '0';
		i++;
		n %= size;
		size /= 10;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	int		length;
	long	size;
	int		neg;

	length = 1;
	size = 1;
	neg = 1;
	if (n < 0)
	{
		n = -n;
		neg = -1;
		length++;
	}
	while (size < n)
	{
		size *= 10;
		length++;
	}
	size /= 10;
	str = malloc(sizeof(char) * length);
	if (!str)
		return (NULL);
	fillstr(neg, size, n, str);
	return (str);
}
