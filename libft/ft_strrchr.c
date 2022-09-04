/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmohd-sh <nmohd-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:23:48 by nmohd-sh          #+#    #+#             */
/*   Updated: 2022/07/18 21:44:07 by nmohd-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//to check, did not pass tester file//

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			ptr = (char *)(str + i);
		i++;
	}
	if (c == 0)
		ptr = (char *)(str + i);
	return (ptr);
}
