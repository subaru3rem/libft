/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:53:23 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/04 18:37:04 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	itoa_test(void)
{
	char	*result;

	result = ft_itoa(INT_MIN);
	printf("resultado itoa: %s\n", result);
	free(result);
}

void	lcpy_test(void)
{
	char	*str;
	int		size;

	str = malloc(4);
	size = ft_strlcpy(str, "test", 2);
	printf("resultado lcpy: size - %d, str - %s\n", size, str);
	free(str);
}

void	lcat_test(void)
{
	char	*str;
	int		size;

	str = malloc(5);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = '\0';
	size = ft_strlcat(str, "test", 4);
	printf("resultado lcat: size - %d, str - %s\n", size, str);
	free(str);
}

void	atoi_test(void)
{
	printf("resultado atoi: %d\n", ft_atoi("   \n\t ---125"));
}

void	memchr_test(void)
{
	char	*str;
	char	*result;

	str = "https://www.tutorialspoint.com";
	result = ft_memchr(str, '.', ft_strlen(str));
	printf("resultado memchr: String after |%c| is - |%s|\n", '.', result);
}

void	trim_test(void)
{
	char	*result;

	result = ft_strtrim("teste", "te");
	printf("resultado trim: %s\n", result);
	free(result);
}

int	main(void)
{
	itoa_test();
	lcpy_test();
	lcat_test();
	atoi_test();
	memchr_test();
	trim_test();
}
