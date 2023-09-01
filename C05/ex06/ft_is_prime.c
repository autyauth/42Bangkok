/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:15:42 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/20 11:48:58 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	_is_prime(int num, long int i)
{
	if (i * i > num)
		return (1);
	if (num % i == 0)
		return (0);
	return (_is_prime(num, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	if (nb < 2)
		return (0);
	return (_is_prime(nb, 5));
}
int	main()
{
	int c = 2147483647;
	printf("%d number =\n", ft_is_prime(2147483646));
}
