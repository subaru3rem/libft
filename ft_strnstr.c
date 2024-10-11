/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:57:03 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 19:55:08 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		l;
	size_t		c;
	int			point;

	c = -1;
	l = 0;
	point = 0;
	while (big[++c] && c < len)
	{
		if (big[c] != little[l] && l > 0)
		{
			l = 0;
			c = point + 1;
		}
		if (big[c] == little[l])
		{
			if (l++ == 0)
				point = c;
		}
		if (little[l] == 0)
			break ;
	}
	if (little[l])
		return (NULL);
	return ((char *)(&big[point]));
}
