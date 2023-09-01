/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:59:39 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/20 17:30:31 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	_rev_params(int row, char **arr)
{
	char	*temp;
	int		i;
	int		size;

	size = row;
	i = 1;
	row += 1;
	temp = *arr;
	while (i < row / 2)
	{
		temp = *(arr + i);
		*(arr + i) = *(arr + size - i);
		*(arr + size - i) = temp;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	_rev_params(argc, argv);
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
