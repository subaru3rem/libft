/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:54:43 by ccosta            #+#    #+#             */
/*   Updated: 2024/09/28 20:54:44 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char ch)
{
	if (ch >= ' ' && ch <= '~')
		return (1);
	return (0);
}
