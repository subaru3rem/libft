/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:54:59 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 16:33:42 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch = ch - ('a' - 'A');
	return (ch);
}
