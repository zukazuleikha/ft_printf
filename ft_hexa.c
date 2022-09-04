/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:47:31 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/08/21 21:01:37 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	caps_hexa_change(uintptr_t number)
{
	if (number >= 16)
	{
		caps_hexa_change (number / 16);
		caps_hexa_change (number % 16);
	}
	else
	{
		if (number < 10)
			ft_putchar_fd (number + '0', 1);
		else
			ft_putchar_fd (number - 10 + 'A', 1);
	}
}

int	ft_hexa(unsigned long hexadecimal, const char placeholder)
{
	int	length;

	length = 0;
	if (hexadecimal == 0)
		length += write (1, "0", 1);
	else if (placeholder == 'x')
	{
		hexadecimal_change(hexadecimal);
		length += pointer_length(hexadecimal);
	}
	else if (placeholder == 'X')
	{
		caps_hexa_change(hexadecimal);
		length += pointer_length(hexadecimal);
	}
	return (length);
}
