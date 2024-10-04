/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:19:49 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/04 17:19:24 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		init;
	int		end;
	char	*result;

	init = 0;
	end = 0;
	c = 0;
	while (s1[c] == set[c])
		c++;
	if (set[c] == 0)
		init = c;
	c = ft_strlen(s1) - 1;
	while (s1[c] == set[c])
		c--;
	if (c == (int)(ft_strlen(s1) - ft_strlen(set)))
	{
		end = ft_strlen(&s1[init]) - ft_strlen(set);
	}
	result = ft_strdup(&s1[init]);
	result[end] = '\0';
	return (result);
}
