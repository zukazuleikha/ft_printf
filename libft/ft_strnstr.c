/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:29:40 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/19 18:34:43 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *match_found, size_t len)
{
	size_t	i;
	size_t	match;

	i = 0;
	if (match_found[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		match = 0;
		if (str[i] == match_found[match])
		{
			while (str[i + match] == match_found[match] && i + match < len)
			{
				match++;
				if (!match_found[match])
					return ((char *)str + i);
			}
		}
		i++;
	}
	return (0);
}
