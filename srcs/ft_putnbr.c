/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:13:44 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/08 19:24:51 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int n)
{
	long taille;
	long nb;

	taille = 1;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (taille <= nb)
	{
		taille = taille * 10;
	}
	taille = taille / 10;
	while (taille > 1)
	{
		ft_putchar((nb / taille) + '0');
		nb = nb % taille;
		taille = taille / 10;
	}
	ft_putchar((nb % 10) + '0');
}
