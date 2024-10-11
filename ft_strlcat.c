/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:25:23 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 19:37:57 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t size;

	if (nb == 0)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	if (nb < i)
		return (nb + ft_strlen(src));
	size = i + ft_strlen(src);
	while (*src && i < nb - 1)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (size);
}
