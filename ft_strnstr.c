/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:57:03 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 01:33:16 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		l;
	size_t		c;
	char		*point;

	c = -1;
	l = 0;
	point = (char *)big;
	while (big[++c] && c < len)
	{
		if (big[c] != little[l] && l > 0)
			l = 0;
		if (big[c] == little[l])
		{
			if (l++ == 0)
				point = (char *)&big[c];
		}
		if (!little[l])
			break ;
	}
	if (little[l])
		point = (NULL);
	return (point);
}
