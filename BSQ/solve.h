/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:27:25 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/28 13:31:44 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H
# include <stdlib.h>
int		add_size(int left, int top, int topleft);
int		**add_size_map(int **new_map, int x, int y, int *max_size);
int		**int_map(char **arr, int x, int y, char obstacle);
int		*find_square(int **new_map, int x, int y, int max_size);
char	**add_in_old_map(int **new_map, char **arr, char c, int *position);
#endif
