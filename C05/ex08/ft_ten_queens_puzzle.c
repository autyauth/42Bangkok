/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:35:22 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/18 18:23:25 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(int *arr)
{
	int	column;

	column = 0;
	while (column < 10)
	{
		ft_putchar(arr[column] + '0');
		column++;
	}
	ft_putchar('\n');
}

int	can_push(int *arr, int column)
{
	int	x;

	x = 0;
	while (x < column)
	{
		if (arr[x] == arr[column])
			return (0);
		if (arr[x] == arr[column] - (column - x))
			return (0);
		if (arr[x] == arr[column] + (column - x))
			return (0);
		x++;
	}
	return (1);
}

void	solve(int arr[10], int column, int *count)
{
	int	row;

	row = 0;
	if (column >= 10)
	{
		print_array(arr);
		*count += 1;
		return ;
	}
	while (row < 10)
	{
		arr[column] = row;
		if (can_push(arr, column) == 1)
		{
			solve(arr, column + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	count;

	count = 0;
	solve(arr, 0, &count);
	return (count);
}
/*int	main()
{
	printf("%d", ft_ten_queens_puzzle());
}*/
