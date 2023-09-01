/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:57:19 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/26 20:11:14 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*typedef struct s_stock_str
{
	int	size;
	char	*str;
	char 	*copy;
}	t_stock_str;*/

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*stock;

	i = 0;
	stock = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (stock == NULL)
		return (NULL);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i] = (struct s_stock_str){0, 0, 0};
	return (stock);
}
/*#include <stdio.h>

int	main(int argc, char **argv)
{
	struct s_stock_str *struc;
	int				i;

	struc = ft_str_to_tab(argc, argv);
	i = 0;
	while (i <argc)
	{
		printf("%d\n", i);
		printf("str = %s, copy = %s, size = %d", struc[i].str,
		struc[i].copy,struc[i].size);
		i++;
	}

	i = 0;
	while(i < argc)
	{
		free(struc[i].copy);
		i++;
	}
	free(struc);
	return (0);
}*/
