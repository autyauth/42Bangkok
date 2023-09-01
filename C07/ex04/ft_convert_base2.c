/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:31:11 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/22 15:24:55 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	str_signs_tab_test(char *str, int *i, int *signs)
{
	while ((str[*i] >= '\t' && str[*i] <= '\r') || str[*i] == ' ')
		*i += 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*signs *= -1;
		*i += 1;
	}
	return (1);
}
