/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:11:18 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/04 18:35:45 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	get_divisor(long int num, int *position)
{
	long int	divisor;
	int			p;

	divisor = 10;
	p = 1;
	while (num / divisor != 0 && p++)
		divisor *= 10;
	*position = p;
	return (divisor);
}

char	*ft_itoa(int n)
{
	long int	divisor;
	long int	number;
	int			position;
	char		*nbr;

	number = n;
	position = 1;
	if (number < 0)
		number *= -1;
	divisor = get_divisor(number, &position);
	nbr = malloc(position + 2);
	if (!nbr)
		return (NULL);
	position = 0;
	if (n < 0)
		nbr[position++] = '-';
	while (divisor != 1)
	{
		divisor = divisor / 10;
		nbr[position++] = (number / divisor) + '0';
		number = number % divisor;
	}
	nbr[position] = '\0';
	return (nbr);
}
