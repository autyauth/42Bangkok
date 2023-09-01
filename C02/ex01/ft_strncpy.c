/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:31:45 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/13 16:59:18 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dest_ptr;
	unsigned int	i;

	i = 0;
	dest_ptr = dest;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest_ptr);
}

/*int	main(void)
{
	char	x[6];
	char	y[]="yyy";
	ft_strncpy(x,"hello",3);
	printf("%s",x);
	printf("%s",ft_strncpy(x,"hello",3));
}*/
