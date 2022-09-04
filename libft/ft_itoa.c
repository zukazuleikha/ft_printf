/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:48:03 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/19 17:53:20 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr_len(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_conversion(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_conversion (n / 10, str, i);
		ft_conversion (n % 10, str, i);
	}
	else
		str[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	long	number;

	number = n;
	result = malloc(sizeof(char) * (ft_nbr_len(number) + 1));
	if (!result)
		return (0);
	i = 0;
	if (number < 0)
	{
		result[i++] = '-';
		number *= -1;
	}
	ft_conversion(number, result, &i);
	result[i] = '\0';
	return (result);
}
