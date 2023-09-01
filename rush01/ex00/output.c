/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:41:44 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/17 14:15:28 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	printable(int **tab, int n)
{
	int	i;
	int	j;

	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			ft_putchar(tab[i][j] + '0');
			if (j != n)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
