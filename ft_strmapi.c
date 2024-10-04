/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:47:40 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 20:55:23 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		c;
	int		len;
	char	*result;

	c = 0;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	while (c < len)
	{
		result[c] = f(c, s[c]);
		c++;
	}
	return (result);
}
