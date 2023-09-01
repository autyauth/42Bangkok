/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:23:53 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/15 16:14:27 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*int	main(void)
{
	char x[] = "daw\n";

	printf("%d",ft_str_is_printable("123DADad"));
	printf("%d",ft_str_is_printable("teas~2~1"));
	printf("%d",ft_str_is_printable(x));
}*/
