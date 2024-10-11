/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:38:16 by ccosta            #+#    #+#             */
/*   Updated: 2024/10/10 20:28:03 by ccosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_isascii(int c);
int		ft_isdigit(char ch);
int		ft_isalpha(char ch);
int		ft_isalnum(char ch);
int		ft_isprint(char ch);
int		ft_atoi(const char *string);
int		ft_strncmp(const char *str, const char *str2, int n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char	ft_tolower(char ch);
char	ft_toupper(char ch);
void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_itoa(int n);
char	*ft_strchr(char *str, int ch);
char	*ft_strrchr(char *str, int ch);
char	*ft_strtrim(char const *s1, char const *set);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_calloc(long int nitems, long int size);
void	*ft_memset(void *dest, int c, size_t n);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void	*ft_memmove(void *dest_str, const void *src_str, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *string);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big,	const char *little, size_t len);
char	**ft_split(char const *s, char c);

#endif
