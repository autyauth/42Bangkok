/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:09:59 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/28 13:23:16 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_map(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != 0)
	{
		ft_putstr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
}
