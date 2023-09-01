/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:42:41 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/29 19:07:51 by thrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	find_size(char *str, char *charset)
{
	int	count;
	int	in_word;
	int	i;

	i = 0;
	in_word = 0;
	count = 0;
	while (str[i] != '\0')
	{
		in_word = is_charset(str[i], charset);
		if (!in_word && (i == 0 || is_charset(str[i - 1], charset)))
		{
			count++;
		}
		i++;
	}
	return (count);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	in_word = 0;
	count = 0;
	while (str[i] != '\0' && !is_charset(str[i], charset))
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *src, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (n + 1));
	while (i < n && src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**new_str;
	int		i[2];
	int		in_word;

	in_word = 0;
	i[0] = 0;
	i[1] = 0;
	new_str = (char **)malloc(sizeof(char *) * find_size(str, charset) + 1);
	if (new_str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		in_word = is_charset(*str, charset);
		if (!in_word && (*str == str[0] || is_charset(*(str - 1), charset)))
		{
			i[1] = count_word(str, charset);
			new_str[i[0]] = ft_strdup(str, i[1]);
			str += i[1];
			i[0]++;
		}
		else
			str++;
	}
	new_str[i[0]] = NULL;
	return (new_str);
}
