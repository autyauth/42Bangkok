/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:49:38 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/16 14:39:48 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_char_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

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

int	base_test(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		if ((base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	atoi_base(char *str, char *base, int position, int signs)
{
	int	result;
	int	plus;
	int	base_size;

	base_size = ft_strlen(base);
	result = 0;
	plus = 0;
	while (str[position] != '\0')
	{
		plus = find_char_base(str[position], base);
		if (plus == -1)
			break ;
		result = plus + result * base_size;
		position++;
	}
	return (signs * result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signs;
	int	base_size;

	i = 0;
	signs = 1;
	base_size = base_test(base);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i += 1;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signs *= -1;
		i += 1;
	}	
	if (base_size == 0)
		return (0);
	return (atoi_base(str, base, i, signs));
}
