/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:09:26 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 00:10:56 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	c;
	char	*substr;

	c = 0;
	size = ft_strlen(&s[start]);
	substr = malloc(sizeof(char) * len);
	if (!substr)
		return (NULL);
	while (c < size && c < len)
	{
		substr[c] = s[start + c];
		c++;
	}
	substr[c] = '\0';
	return (substr);
}
