/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:10:40 by ccosta            #+#    #+#             */
/*   Updated: 2024/09/23 19:11:23 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	int	c;
	int	last;

	c = 0;
	while (str[c])
	{
		if (str[c] == ch)
			last = c;
		c++;
	}
	if (last == 0 && str[0] != ch)
		return (NULL);
	return (&str[last]);
}
