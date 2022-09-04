/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:46:30 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/19 18:29:21 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] && s)
	{
		if (s[i] != c)
		{
			count ++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		start;
	int		count;
	int		len;

	if (!s)
		return (0);
	start = 0;
	i = 0;
	count = ft_str_count (s, c);
	dest = malloc (sizeof(char *) * (count + 1));
	if (!dest)
		return (0);
	while (start < count)
	{
		while (s[i] == c)
			i++;
		len = ft_word_len(s, c, i);
		dest[start] = ft_substr(s, i, len);
		i += len;
		start++;
	}
	dest[start] = 0;
	return (dest);
}

// #include <stdio.h>

// int main ()
// {
// 	char * * tab = ft_split("  tripouille  42  ", ' ');
// 	printf("result is %s\n", tab[0]);

// }