/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:29:25 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/23 16:43:07 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	return (result + ((size - 1) * ft_strlen(sep)));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*arr;

	i = 0;
	j = 0;
	k = 0;
	arr = (char *)malloc(1 + ft_strslen(size, strs, sep) * (sizeof(char)));
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			arr[k++] = strs[i][j++];
		j = 0;
		i++;
		while (sep[j] != '\0' && i < size)
			arr[k++] = sep[j++];
	}
	arr[k] = '\0';
	return (arr);
}
/*
int	main()
{
	char *x[] = {"Hello","World","!"};
	char *y = ft_strjoin(3,x,", ");
	printf("%s",y);
	free(y);

}*/
