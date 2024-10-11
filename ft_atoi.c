/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:17:01 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 20:14:29 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int	c;
	int	num;
	int	negative;
	int	positive;

	c = -1;
	num = 0;
	negative = 0;
	positive = 0;
	while (string[++c])
	{
		if (string[c] == '-' && num == 0 && string[c - 1] != '+' && string[c - 1] != '-')
			negative++;
		else if (string[c] == '+' && num == 0 && string[c - 1] != '+' && string[c - 1] != '-')
			positive++;
		else if (string[c] <= ' ' && num == 0 && negative == 0 && positive == 0)
			continue ;
		else if (ft_isdigit(string[c]))
			num = (num * 10) + (string[c] - '0');
		else
			break ;
	}
	if (negative % 2 != 0)
		num *= -1;
	return (num);
}
