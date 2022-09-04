/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:25:44 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/19 18:07:14 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//to check . failed tester//

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (lst == 0)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
