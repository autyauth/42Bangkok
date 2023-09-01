/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:22:52 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/20 17:31:46 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compare_str(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	if ((unsigned char)str1[i] - (unsigned char)str2[i] > 0)
		return (1);
	else
		return (0);
}

void	_sort_params(char **arr, int size)
{
	char	*key;
	int		i;
	int		j;

	i = 2;
	while (i < size)
	{
		key = *(arr + i);
		j = i - 1;
		while (j >= 0 && compare_str(*(arr + j), key) == 1)
		{
			*(arr + j + 1) = *(arr + j);
			j--;
		}
		*(arr + j + 1) = key;
		i++;
	}
}

int	main(int argv, char **argc)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	_sort_params(argc, argv);
	while (i < argv)
	{
		j = 0;
		while (argc[i][j] != '\0')
		{
			write(1, &argc[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
