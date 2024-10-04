/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:19:36 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/02 01:34:51 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	split_len(char const *str, char src)
{
	int	count;

	count = 1;
	while (*str)
	{
		if (*str == src)
			count++;
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		co;
	int		count;
	int		init;
	char	*pointer;
	char	**strs;

	count = 0;
	init = 0;
	co = 0;
	pointer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	strs = malloc(sizeof(char *) * (split_len(s, c) + 1));
	strs[init++] = pointer;
	while (s[count])
	{
		if (s[count++] != c)
			pointer[co++] = s[count - 1];
		else
		{
			pointer[co++] = '\0';
			strs[init++] = &pointer[co];
		}
	}
	pointer[co] = '\0';
	strs[init] = NULL;
	return (strs);
}
