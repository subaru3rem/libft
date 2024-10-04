/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:57:23 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 00:58:37 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		c;
	char	*str;

	c = 0;
	str = malloc(sizeof(char) * (ft_strlen(string) + 1));
	while (string[c])
	{
		str[c] = string[c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
