/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:11:13 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/23 15:05:45 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (0);
	len = 0;
	while (src[len] != '\0')
	{
		ptr[len] = src[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{
	char *x;
	x = ft_strdup("test");
	printf("%s",x);
	free(x);
}*/
