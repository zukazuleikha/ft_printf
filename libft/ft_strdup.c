/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:37:02 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/19 18:30:02 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*result;
	size_t	i;

	result = (char *)malloc(sizeof(char) * ft_strlen(string) + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < ft_strlen(string))
	{
		result[i] = string[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
