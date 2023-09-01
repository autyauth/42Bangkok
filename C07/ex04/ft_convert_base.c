/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 20:00:15 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/23 16:43:56 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int	find_char_base(char c, char *base);

int	str_signs_tab_test(char *str, int *i, int *signs);

int	base_test(char *base);

char	*ft_reverse_str(char *str)
{
	char	*arr;
	char	temp;
	int		i;
	int		size;

	temp = str[0];
	i = 0;
	size = ft_strlen(str);
	arr = (char *)malloc(size * sizeof(char) + 1);
	while (--size >= 0)
	{
		arr[i] = str[size];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	plus;
	int	base_size;
	int	i;
	int	signs;

	result = 0;
	plus = 0;
	base_size = ft_strlen(base);
	i = 0;
	signs = 1;
	if (str_signs_tab_test(str, &i, &signs) == 0)
		return (0);
	while (str[i] != '\0')
	{
		plus = find_char_base(str[i], base);
		if (plus == -1)
			break ;
		result = plus + result * base_size;
		i++;
	}
	return (signs * result);
}

char	*ft_decimal_to_base(long int num, char *base_to)
{
	int		base_size;
	int		i;
	char	*str_to;
	int		signs;

	signs = 1;
	i = 0;
	base_size = ft_strlen(base_to);
	str_to = (char *)malloc(32 * sizeof(char) + 2);
	if (num < 0)
	{
		signs = -1;
		num = -num;
	}
	if (num == 0)
		str_to[i++] = '0';
	while (num > 0)
	{
		str_to[i++] = base_to[num % base_size];
		num /= base_size;
	}
	if (signs == -1)
		str_to[i++] = '-';
	str_to[i] = '\0';
	return (str_to);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	decimal;
	int		i;
	char	*str_to;
	char	*str_to2;

	if (base_test(base_from) == 0 || base_test(base_to) == 0)
		return (NULL);
	i = 0;
	decimal = ft_atoi_base(nbr, base_from);
	if (decimal < -2147483648 || decimal > 2147483647)
		return (NULL);
	str_to = ft_decimal_to_base(decimal, base_to);
	str_to2 = ft_reverse_str(str_to);
	free(str_to);
	return (str_to2);
}
/*
int	main()
{
	char	nbr[] = "    -80000000";
	char	base_from[] = "01";
	char	base_to[] = "0123456789ABCDEF";
	
	char	*x;
	x = ft_convert_base(nbr, base_to, base_from);
	printf("%s", x);
	free(x);
}*/
