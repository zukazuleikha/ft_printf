/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:40:47 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/09/04 09:54:47 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	total_length(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*asc;
	int		digit;

	digit = total_length(n);
	asc = malloc(sizeof(char) * (digit + 1));
	if (!asc)
		return (0);
	asc[digit] = '\0';
	while (n != 0)
	{
		asc[digit - 1] = n % 10 + 48;
		n = n / 10;
		digit --;
	}
	return (asc);
}

int	ft_unsigned(unsigned int n)
{
	int		length;
	char	*numbers;

	length = 0;
	if (n == 0)
		length += write (1, "0", 1);
	else
	{
		numbers = ft_unsigned_itoa(n);
		length = ft_putstr_length(numbers);
		free (numbers);
	}
	return (length);
}
