#include <stdlib.h>

#ifndef libft.h
#define libft.h
char	*ft_itoa(int n);
size_t	strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(char *str, char ch);
int	ft_strlen(char	*str);
int	strncmp(char *str, char *str2, int n);
char	*ft_strrchr(char *str, int ch);
#endif