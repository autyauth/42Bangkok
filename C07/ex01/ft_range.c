/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:42:07 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/23 15:06:00 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = max - min;
	if (i <= 0)
		return (0);
	ptr = (int *)malloc(i * sizeof(int));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	int	*x;
	int	i;
	int	size;

	i = 0;
	x = ft_range(-10,10);
	size = 20;
	for (i = 0; i < size; i++)
	{
		printf("%d",x[i]);
	}
	free(x);
	return (0);
}*/
