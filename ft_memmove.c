/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:59:39 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 20:27:43 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	char	*str;
	char	*dest;

	str = malloc(n);
	ft_memcpy(str, src_str, n);
	dest = (char *)dest_str;
	ft_memcpy(dest_str, str, n);
	free(str);
	return (dest);
}
