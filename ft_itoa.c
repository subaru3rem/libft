/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:11:18 by ccosta            #+#    #+#             */
/*   Updated: 2024/09/28 19:11:21 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	divisor;
	long int	number;
	int			position;
	char		*nbr;

	number = n;
	divisor = 10;
	position = 1;
	if (number < 0)
		number *= -1;
	while (number / divisor != 0 && position++)
		divisor = divisor * 10;
	nbr = malloc(sizeof(char) * position);
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
	return (nbr);
}