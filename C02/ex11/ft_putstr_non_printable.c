/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:51:28 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/15 17:01:14 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_deci_to_hex(int num)
{
	char	hex[16];
	char	val;
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			hex[i] = i + '0';
		else
			hex[i] = i + 87;
		i++;
	}
	val = hex[num];
	return (val);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex;

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			hex = ft_deci_to_hex((*str >> 4) & 0x0F);
			write(1, "\\", 1);
			write(1, &hex, 1);
			hex = ft_deci_to_hex(*str & 0x0F);
			write(1, &hex, 1);
		}
		str++;
	}
}
int	main()
{
	char x[] = "Coucou\ntu vas bien ?";
	x[6] = -120;
	ft_putstr_non_printable(x);
}
