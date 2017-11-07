/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 15:13:21 by acourtin          #+#    #+#             */
/*   Updated: 2017/09/04 14:38:29 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int taille;

	i = 0;
	taille = 0;
	while (dest[taille] != '\0')
	{
		taille += 1;
	}
	if (taille > 0)
	{
		while (src[i] != '\0')
		{
			dest[taille] = src[i];
			taille += 1;
			i += 1;
		}
		dest[taille] = '\0';
	}
	return (dest);
}
