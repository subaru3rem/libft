/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:10:40 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 16:55:31 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	int	c;
	int	last;

	c = 0;
	last = 0;
	if (ch > 255)
	{
		ch = ch % 256;
	}
	while (str[c])
	{
		if (str[c] == (char)ch)
			last = c;
		c++;
	}
	if (str[c] == (char)ch)
		last = c;
	if (last == 0 && str[0] != ch)
		return (NULL);
	return (&str[last]);
}
