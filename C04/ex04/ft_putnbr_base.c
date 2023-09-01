/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:46:50 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/16 14:31:20 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char c)
{
	write(1, &c, 1);
}

int	base_test(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		if ((base[i] >= '\t' && base[i] <= '\r') && base[i] == 't')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	print_num_base(long num, char *base, int base_size)
{
	if (num < 0)
	{
		putstr('-');
		print_num_base(-num, base, base_size);
		return ;
	}
	if (num >= base_size)
		print_num_base(num / base_size, base, base_size);
	putstr(base[num % base_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = base_test(base);
	if (base_size == 0)
		return ;
	print_num_base(nbr, base, base_size);
}
/*int	main()
{
	ft_putnbr_base(-2147483648,"0123456789ABCDEF");
}*/
