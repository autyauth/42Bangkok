/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:38:13 by vbanlues          #+#    #+#             */
/*   Updated: 2023/06/10 16:38:21 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_char_to_int(char *num)
{
	int	value;
	int	negative;

	value = 0;
	negative = 0;
	if (*num == '-')
	{
		negative = 1;
		num++;
	}
	while (*num)
	{
		value *= 10;
		if (negative == 1)
			value -= *num - '0';
		else
			value += *num - '0';
		num++;
	}
	return (value);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = ft_char_to_int(argv[1]);
	y = ft_char_to_int(argv[2]);
	if (argc != 3)
	{
		return (-1);
	}
	rush(x, y);
	return (0);
}
