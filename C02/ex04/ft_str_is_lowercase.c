/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:12:45 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/12 13:18:37 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d",ft_str_is_lowercase("123"));
	printf("%d",ft_str_is_lowercase("1daw23"));
	printf("%d",ft_str_is_lowercase("12AWD3"));
	printf("%d",ft_str_is_lowercase("asdaD"));
	printf("%d",ft_str_is_lowercase("adad"));
}*/
