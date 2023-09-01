/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:19:24 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/12 13:24:03 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str ++;
	}
	return (1);
}
/*int	main(void)
{	
	printf("%d",ft_str_is_uppercase("123"));
	printf("%d",ft_str_is_uppercase("121asdA"));
	printf("%d",ft_str_is_uppercase("ASDA"));
}*/
