/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:31:27 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/09/04 09:57:18 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_null(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_putstr_length(char *str)
{
	int	char_count;

	char_count = 0;
	if (str == 0)
	{
		ft_null("(null)");
		return (6);
	}
	while (str[char_count])
	{
		write(1, &str[char_count], 1);
		char_count++;
	}
	return (char_count);
}

int	ft_putnbr_length(int n)
{
	int		digit_length;
	char	*numbers;

	numbers = ft_itoa(n);
	digit_length = ft_putstr_length(numbers);
	free (numbers);
	return (digit_length);
}
