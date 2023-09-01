/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:47:09 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/09 18:53:29 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num[2];
	char	d1[2];
	char	d2[2];

	num[0] = 0;
	while (num[0] <= 98)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			d1[1] = (num[0] % 10) + '0';
			d1[0] = (num[0] / 10) + '0';
			d2[1] = (num[1] % 10) + '0';
			d2[0] = (num[1] / 10) + '0';
			write(1, &d1, 2);
			write(1, " ", 1);
			write(1, &d2, 2);
			if ((num[0] != 98) || (num[1] != 99))
				write(1, ", ", 2);
			num[1]++;
		}
		num[0]++;
	}	
}
