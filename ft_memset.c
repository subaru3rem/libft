/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:28:10 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 20:31:15 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t	count;
	char	*d;

	count = 0;
	d = (char *)dest;
	while (count < n)
	{
		d[count] = c;
		count++;
	}
	return (dest);
}
