/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 16:55:04 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/19 18:42:42 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	_is_prime(int num, long int i)
{
	if (num == 2 || num == 3)
		return (1);
	if (num % 2 == 0 || num % 3 == 0)
		return (0);
	if (num < 2)
		return (0);
	if (i * i > num)
		return (1);
	if (num % i == 0)
		return (0);
	return (_is_prime(num, i + 1));
}

int	ft_find_next_prime(int nb)
{
	if (_is_prime(nb, 2))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/*int	main()
{
	printf("%d\n",ft_find_next_prime(123123));
}*/
