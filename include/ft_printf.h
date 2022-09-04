/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:05:47 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/08/30 16:08:06 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <libft.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_check_converter(va_list ap, const char placeholder);
int		ft_putstr_length(char *str);
void	ft_null(char *str);
int		ft_putnbr_length(int n);
int		ft_unsigned(unsigned int n);
char	*ft_unsigned_itoa(unsigned int n);
int		total_length(unsigned int n);
int		ft_pointer(unsigned long pointer);
void	hexadecimal_change(uintptr_t number);
int		pointer_length(uintptr_t number);
int		ft_hexa(unsigned long hexadecimal, const char placeholder);
void	caps_hexa_change(uintptr_t number);

#endif