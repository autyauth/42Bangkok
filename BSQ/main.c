/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:26:22 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/28 13:35:16 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "solve.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void	ft_free(char **arr, int **new_map, int *position)
// {
// 	int	i;

// 	i = 0;
// 	if (arr)
// 	{
// 		while (arr[i])
// 		{
// 			free(arr[i]);
// 			i++;
// 		}
// 		free(arr);
// 	}
// 	if (new_map)
// 	{
// 		i = 0;
// 		while (new_map[i])
// 		{
// 			free(new_map[i]);
// 			i++;
// 		}
// 		free(new_map);
// 	}
// 	if (position)
// 		free(position);
// }

int	main(void)
{
	int		**new_int_map;
	int		max_size;
	int		*position;
	char	**new_arr;
	char	**arr;

	arr = (char **)malloc(5 * sizeof(char *));
    strcpy(arr[0], "...0.");
    strcpy(arr[1], ".....");
    strcpy(arr[2], "...0.");
    strcpy(arr[3], "...0.");
    strcpy(arr[4], "...0.");
	max_size = 0;
	new_int_map = int_map(arr, 5, 5, '0');
	new_int_map = add_size_map(new_int_map, 5, 5, &max_size);
	position = find_square(new_int_map, 5, 5, max_size);
	new_arr = add_in_old_map(new_int_map, arr, 'X', position);
	ft_print_map(new_arr);
	// ft_free(arr, new_int_map, position);
	return (0);
}
