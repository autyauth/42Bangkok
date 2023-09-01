/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:49:14 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/09 19:25:39 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n, int curr, char *comb, int posi)
{
	int	i;

	i = curr;
	if (posi == n)
	{
		write(1, comb, n);
		if (comb[0] < (10 + 48 - n))
			write(1, ", ", 2);
		return ;
	}
	while (i <= 9)
	{
		comb[posi] = i + '0';
		ft_print(n, i + 1, comb, posi + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[n];

	ft_print(n, 0, comb, 0);
}
/*
int	main(void)
{
	ft_print_combn(1);
	ft_print_combn(9);
}*/
