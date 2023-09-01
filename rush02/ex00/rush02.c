/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliashko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:41:30 by sliashko          #+#    #+#             */
/*   Updated: 2023/06/10 15:33:31 by sliashko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	build_h_line(int n, char edge)
{
	int		i;

	i = 1;
	if (n > 1)
	{
		ft_putchar(edge);
		while (i < n - 1)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar(edge);
	}
	else
	{
		ft_putchar(edge);
	}
	ft_putchar('\n');
}

void	put_space_b(int n)
{
	int		i;

	i = 1;
	ft_putchar('B');
	if (n > 1)
	{
		while (i < n - 1)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x >= 1 && y > 1)
	{
		build_h_line(x, 'A');
		while (i < y - 1)
		{
			put_space_b(x);
			i++;
		}
		build_h_line(x, 'C');
	}
	else if (x >= 1 && y == 1)
	{
		build_h_line(x, 'A');
	}
}
