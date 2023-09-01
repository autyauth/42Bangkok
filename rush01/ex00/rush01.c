/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:39:50 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/18 20:07:13 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check(int **tab, int i, int j, int n);
void	printable(int **tab, int n);

void	solve(int i, int j, int n, int **tab)
{
	int	c;

	if (tab[0][0] == 1)
		return ;
	if (i == n + 1 && j == 1)
	{
		tab[0][0] = 1;
		printable(tab, n);
		return ;
	}
	c = 1;
	while (c <= n)
	{
		tab[i][j] = c;
		if (check(tab, i, j, n))
		{
			if (j == n)
				solve(i + 1, 1, n, tab);
			else
				solve(i, j + 1, n, tab);
		}
		c++;
	}
}

void	arrtotab(int *arr, int **tab, int n)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= n)
		tab[0][i++] = arr[j++];
	i = 1;
	while (i <= n)
		tab[n + 1][i++] = arr[j++];
	i = 1;
	while (i <= n)
		tab[i++][0] = arr[j++];
	i = 1;
	while (i <= n)
		tab[i++][n + 1] = arr[j++];
	return ;
}

void	rush(int n, int *a)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * (n + 3));
	while (i <= n + 2)
	{
		j = 0;
		tab[i] = (int *)malloc(sizeof(int) * (n + 3));
		while (j <= n + 2)
			tab[i][j++] = 0;
		i++;
	}
	arrtotab(a, tab, n);
	solve(1, 1, n, tab);
	if (tab[0][0] == 0)
		write(1, "Error\n", 6);
	i = 0;
	while (i <= n + 2)
		free(tab[i++]);
}
