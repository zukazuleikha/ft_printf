/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:31:28 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/19 18:56:58 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	nbr;
	int			is_neg;
	int			i;

	i = 0;
	is_neg = 1;
	nbr = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			is_neg = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		nbr = (nbr * 10) + (str[i++] - '0');
		if (nbr * is_neg > 2147483647)
			return (-1);
		if (nbr * is_neg < -2147483648)
			return (0);
	}
	return (nbr * is_neg);
}
