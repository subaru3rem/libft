/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:09:26 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 21:12:49 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	c;
	char	*substr;

	c = 0;
	if (start > ft_strlen(s))
	{
		substr = malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	if (len == 0)
	{
		substr = malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	size = ft_strlen(&s[start]);
	if (len > size)
		len = size;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (c < len)
	{
		substr[c] = s[start + c];
		c++;
	}
	substr[c] = '\0';
	return (substr);
}
