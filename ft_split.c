/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:19:36 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/15 20:53:32 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	split_len(char const *str, char src)
{
	int co;
	int	count;

	count = 0;
	co = -1;
	while (str[++co])
	{
		if (str[co] != src)
			continue;
		if (str[co] == src && (str[co + 1] == src || str[co + 1] == 0))
			continue;
		else
		{
			count++;
		}
	}
	if (count == 0)
		count++;
	return (count);
}

static char *ft_getstr(char const *str, char c)
{
	int		interval;
	char	*pointer;
	char	*final;

	interval = (ft_strchr((char *)str, c) + 1) - str;
	if (interval < 0)
		interval = ft_strlen(str);
	pointer = malloc(interval);
	ft_strlcpy(pointer, str, interval);
	final = ft_strdup(pointer);
	free(pointer);
	return (final);
}

char	**ft_split(char const *s, char c)
{
	int		co;
	int		init;
	char	**strs;

	co = 0;
	init = 0;
	strs = malloc(sizeof(char *) * (split_len(s, c) + 1));
	if (s[0] == '\0')
	{
		strs[0] = NULL;
		return (strs);
	}
	if (s[co] != c)
		strs[init++] = ft_getstr(s, c);
	co--;
	while (s[++co])
	{
		if (s[co] != c)
			continue;
		if (s[co] == c && (s[co + 1] == c || s[co + 1] == 0))
			continue;
		else
		{
			strs[init++] = ft_getstr(&s[co+1], c);
		}
	}
	strs[init] = NULL;
	return (strs);
}
