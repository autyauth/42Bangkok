/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:02:34 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/28 13:16:16 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	add_size(int left, int top, int topleft)
{
	int	min_size;

	min_size = topleft;
	if (top < min_size)
		min_size = top;
	if (left < min_size)
		min_size = left;
	return (1 + min_size);
}

int	**add_size_map(int **new_map, int x, int y, int *max_size)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < y)
	{
		j = 1;
		while (j < x)
		{
			if (new_map[i][j] == 1)
			{
				new_map[i][j] = add_size(new_map[i - 1][j],
						new_map[i][j - 1], new_map[i - 1][j - 1]);
				if (new_map[i][j] > *max_size)
					*max_size = new_map[i][j];
			}
			j++;
		}
		i++;
	}
	return (new_map); 
}

int	**int_map(char **arr, int x, int y, char obstacle)
{
	int	**new_map;
	int	i;
	int	j;

	i = 0;
	j = 0;
	new_map = (int **)malloc(y * sizeof(int));
	if (new_map == NULL)
		return (NULL);
	while (i < y)
	{
		j = 0;
		new_map[i] = (int *)malloc(x * sizeof(int));
		if (new_map[i] == NULL)
		{
			while (j < i)
			{
				free(new_map[j]);
				j++;
			}
			free(new_map);
			return (NULL);
		}
		while (j < x)
		{
			if (arr[i][j] == obstacle)
				new_map[i][j] = 0;
			else
				new_map[i][j] = 1;
			j++;
		}
		i++;
	}
	return (new_map);
}

int	*find_square(int **new_map, int x, int y, int max_size)
{
	int	*position;
	int	i;
	int	j;

	position = (int *)malloc(2 * sizeof(int));
	if (position == NULL)
		return (0);
	i = 0;
	j = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (new_map[i][j] == max_size)
			{
				position[0] = i;
				position[1] = j;
				return (position);
			}
			j++;
		}
		i++;
	}
	return (position);
}

char	**add_in_old_map(int **new_map, char **arr, char c, int *position)
{
	int	i;
	int	j;
	int	max_size;

	max_size = new_map[position[0]][position[1]];
	i = 0;
	j = 0;
	while (i < max_size)
	{
		j = 0;
		while (j < max_size)
		{
			arr[position[0] - i][position[1] - j] = c;
			j++;
		}
		i++;
	}
	return (arr);
}
