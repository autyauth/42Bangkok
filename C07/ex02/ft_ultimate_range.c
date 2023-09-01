/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:40:47 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/23 16:41:34 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = max - min;
	if (i <= 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(i * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = min;
	while (i < max)
	{
		(*range)[i - min] = i;
		i++;
	}
	return (max - min);
}
/*#include <stdio.h>

int	main()
{
	int	**ptr;
	int	*arr;
	int	len;
	int	i;

	ptr = &arr;
	i = 0;
	len = ft_ultimate_range(ptr, -4, -1);
	while (i < len)
	{
		printf("%d",arr[i]);
		i++;
	}
	free(arr);
}*/
