/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 15:22:53 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/10 11:12:13 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int taille;

	i = 0;
	taille = 0;
	while (dest[taille] != '\0')
	{
		taille += 1;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[taille + i] = src[i];
		i += 1;
	}
	dest[taille + i] = '\0';
	return (dest);
}
