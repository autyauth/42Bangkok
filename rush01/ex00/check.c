/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:57:40 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/18 15:55:09 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left(int **tab, int x, int y, int size);
int	check_right(int **tab, int x, int y, int size);
int	check_top(int **tab, int x, int y, int size);
int	check_bottom(int **tab, int x, int y, int size);

int	checkone(int **tab, int i, int j, int n)
{	
	if (i == 1 && tab[0][j] == 1 && tab[i][j] != n)
		return (0);
	if (i == n && tab[n + 1][j] == 1 && tab[i][j] != n)
		return (0);
	if (j == 1 && tab[i][0] == 1 && tab[i][j] != n)
		return (0);
	if (j == n && tab[i][n + 1] == 1 && tab[i][j] != n)
		return (0);
	return (1);
}

int	check_double(int **tab, int i, int j)
{
	int	k;

	k = j - 1;
	while (k > 0)
		if (tab[i][k--] == tab[i][j])
			return (0);
	k = i - 1;
	while (k > 0)
		if (tab[k--][j] == tab[i][j])
			return (0);
	return (1);
}

int	check(int **tab, int i, int j, int n)
{
	if (checkone(tab, i, j, n) == 0)
		return (0);
	if (i < tab[0][j] && !(tab[i][j] <= n - (tab[0][j] - i)))
		return (0);
	if (n - i + 1 < tab[n + 1][j] && tab[i][j] > 2 * n - tab[n + 1][j] - i + 1)
		return (0);
	if (j < tab[i][0] && !(tab[i][j] <= n - (tab[i][0] - j)))
		return (0);
	if (n - j + 1 < tab[i][n + 1] && tab[i][j] > 2 * n - tab[i][n + 1] - j + 1)
		return (0);
	if (!(check_double(tab, i, j)))
		return (0);
	if (j == n)
		if (!(check_left(tab, j, i, n) && check_right(tab, j, i, n)))
			return (0);
	if (i == n)
		if (!(check_top(tab, j, i, n) && check_bottom(tab, j, i, n)))
			return (0);
	return (1);
}
