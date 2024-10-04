/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:57:26 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 00:14:29 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		count;
	int		size1;
	char	*str;

	count = 0;
	size1 = ft_strlen(s1);
	size = size1 + ft_strlen(s2);
	str = malloc(sizeof(char) * (size + 1));
	while (count < size)
	{
		if (count < size1)
			str[count] = s1[count];
		else
			str[count] = s2[count - size1];
		count++;
	}
	str[count] = '\0';
	return (str);
}
