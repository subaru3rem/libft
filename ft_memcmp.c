/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:12:01 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 16:29:07 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t		c;
	char		*s1;
	char		*s2;

	c = 0;
	s1 = (char *)ptr1;
	s2 = (char *)ptr2;
	while (c < num)
	{
		if (s1[c] != s2[c])
			return (s2 - s1);
		c++;
	}
	return (0);
}
