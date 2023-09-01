/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:40:58 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/15 16:58:29 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		capitalization;
	char	*temp;

	temp = str;
	capitalization = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z' && capitalization == 1)
		{
			*str -= 32;
			capitalization = 0;
		}
		else if (*str >= 'A' && *str <= 'Z' && capitalization == 1)
			capitalization = 0;
		else if (*str >= '0' && *str <= '9')
			capitalization = 0;
		else if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		else if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			capitalization = 0;
		else
			capitalization = 1;
		str++;
	}
	return (temp);
}
int	main(void)
{
	char	x[] = "salut, comment tu vas ?HHello m42mots quarante-deux; cinquante+et+un";
	char *y = ft_strcapitalize(x);
	printf("%s",y);
}
