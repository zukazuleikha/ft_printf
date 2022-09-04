/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:33:04 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/19 17:51:33 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*rtn;
	size_t	total;

	if (size >= SIZE_MAX || nitems >= SIZE_MAX)
		return (0);
	total = nitems * size;
	rtn = malloc(total);
	if (!rtn)
		return (0);
	ft_bzero(rtn, total);
	return (rtn);
}
