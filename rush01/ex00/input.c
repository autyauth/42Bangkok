/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 14:06:34 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/18 20:10:17 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int n, int *a);

int	ft_strlen(char *str)
{
	int	i;
	int	n;
	int	check;

	i = 0;
	n = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '1' && check == 0)
		{
			i++;
			check = 1;
			n += 1;
		}
		else if (str[i] == ' ')
		{
			i++;
			check = 0;
		}
		else
			return (0);
	}
	return (n);
}

void	ft_atoi(char *str, int *n, int *arr)
{
	int	j;

	j = 0;
	while (*str)
	{
		if (*str <= '9' && *str >= '1')
		{
			arr[j++] = *str - '0';
		}
		str++;
	}
	if (*n % 4 != 0)
		*n = 0;
	*n = *n / 4;
	return ;
}

int	main(int argc, char **argv)
{
	int	n;
	int	*arr;

	n = 0;
	if (argc != 2)
		write(1, "Error\n", 6);
	else
	{
		n = ft_strlen(argv[1]);
		arr = (int *)malloc(sizeof(int) * n);
		ft_atoi(argv[1], &n, arr);
		if (n == 0)
			write(1, "Error\n", 6);
		rush(n, arr);
		free(arr);
	}
}
