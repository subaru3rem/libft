/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:38:48 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 20:31:24 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(long int nitems, long int size)
{
	int		*array;
	long int	c;

	if ((size < 0 || nitems < 0) && size != 0 && nitems != 0)
		return (NULL);
	c = 0;
	array = malloc(nitems * size);
	if (!array)
		return (NULL);
	ft_memset(array, 0, nitems * size);
	return (array);
}
