/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:04:45 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/09 16:57:05 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{	
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(214748364);
		write(1, &"8", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(-nb);
		return ;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
