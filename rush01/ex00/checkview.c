/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkview.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 23:50:35 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/18 15:55:08 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printable(int **tab, int n);

int	check_left(int **tab, int x, int y, int size)
{
	int	view;
	int	temp;
	int	i;

	x = 0;
	view = 1;
	temp = tab[y][1];
	i = 1;
	while (i <= size)
	{
		if (temp < tab[y][i++])
		{
			temp = tab[y][i - 1];
			view++;
		}
	}
	if (view == tab[y][0])
	{
		return (1);
	}
	return (0);
}

int	check_right(int **tab, int x, int y, int size)
{
	int	view;
	int	temp;
	int	i;

	x = 0;
	view = 1;
	temp = tab[y][size];
	i = size;
	while (i >= 1)
	{
		if (temp < tab[y][i--])
		{
			temp = tab[y][i + 1];
			view++;
		}
	}
	if (view == tab[y][size + 1])
	{
		return (1);
	}
	return (0);
}

int	check_top(int **tab, int x, int y, int size)
{
	int	view;
	int	temp;
	int	i;

	y = 0;
	view = 1;
	temp = tab[1][x];
	i = 1;
	while (i <= size)
	{
		if (temp < tab[i++][x])
		{
			temp = tab[i - 1][x];
			view++;
		}
	}
	if (view == tab[0][x])
	{
		return (1);
	}
	return (0);
}

int	check_bottom(int **tab, int x, int y, int size)
{
	int	view;
	int	temp;
	int	i;

	y = 0;
	view = 1;
	temp = tab[size][x];
	i = size;
	while (i > 0)
	{
		if (temp < tab[i--][x])
		{
			temp = tab[i + 1][x];
			view++;
		}
	}
	if (view == tab[size + 1][x])
	{	
		return (1);
	}
	return (0);
}
