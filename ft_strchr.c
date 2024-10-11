/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:14:05 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 16:51:45 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int ch)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] == (char)ch)
			return (&str[c]);
		c++;
	}
	if (str[c] == (char)ch)
			return (&str[c]);
	return (NULL);
}
