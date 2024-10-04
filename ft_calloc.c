/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:38:48 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 19:53:11 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	int		*array;
	size_t	c;

	c = 0;
	array = malloc((nitems + 1) * size);
	while (c < nitems)
	{
		array[c] = 0;
		c++;
	}
	return (array);
}
