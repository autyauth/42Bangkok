/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:38:24 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/20 11:48:21 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sqr_break(int num, long int root)
{
	if (root * root > num)
		return (0);
	if (root * root < num)
		return (sqr_break(num, root + 1));
	return (root);
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (sqr_break(nb, 1));
}
int	main()
{

	printf("%d\n",ft_sqrt(2147395600));
}
