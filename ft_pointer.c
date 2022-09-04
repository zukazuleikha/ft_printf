/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:13:04 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/09/04 09:57:10 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	pointer_length(uintptr_t number)
{
	int	length;

	length = 0;
	while (number)
	{
		number /= 16;
		length++;
	}
	return (length);
}

void	hexadecimal_change(uintptr_t number)
{
	if (number >= 16)
	{
		hexadecimal_change(number / 16);
		hexadecimal_change(number % 16);
	}
	else
	{
		if (number < 10)
			ft_putchar_fd(number + '0', 1);
		else
			ft_putchar_fd(number - 10 + 'a', 1);
	}
}

int	ft_pointer(unsigned long pointer)
{
	int	length;

	length = 0;
	if (pointer == 0)
		length += write(1, "0", 1);
	else
	{
		hexadecimal_change(pointer);
		length += pointer_length(pointer);
	}
	return (length);
}
