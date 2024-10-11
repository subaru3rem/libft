/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:18:10 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 17:08:15 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str, const char *str2, int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	while (str[c] && str2[c] && c < n - 1)
	{
		if (str[c] - str2[c] != 0)
			break ;
		c++;
	}
	return (str[c] - str2[c]);
}
