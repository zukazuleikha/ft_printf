/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:09:26 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/08/30 22:07:35 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check_converter(va_list ap, const char placeholder)
{
	int	whole_conversion;

	whole_conversion = 0;
	if (placeholder == '%')
		return (ft_putchar('%'));
	else if (placeholder == 'c')
		whole_conversion += ft_putchar(va_arg(ap, int));
	else if (placeholder == 's')
		whole_conversion += ft_putstr_length(va_arg(ap, char *));
	else if (placeholder == 'i' || placeholder == 'd')
		whole_conversion += ft_putnbr_length(va_arg(ap, int));
	else if (placeholder == 'u')
		whole_conversion += ft_unsigned(va_arg(ap, unsigned int));
	else if (placeholder == 'p')
	{
		whole_conversion += write (1, "0x", 2);
		whole_conversion += ft_pointer(va_arg(ap, unsigned long));
	}
	else if (placeholder == 'x' || placeholder == 'X')
		whole_conversion += ft_hexa(va_arg(ap, unsigned int), placeholder);
	return (whole_conversion);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check_converter(ap, str[i + 1]);
			i++;
		}
		else
		count += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
