/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:36:43 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 19:52:29 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t	c;
	char	*dest;
	char	*src;

	c = 0;
	dest = (char *)dest_str;
	src = (char *)src_str;
	while (c < n)
	{
		*dest = *src;
		dest++;
		src++;
		c++;
	}
	return (dest);
}
