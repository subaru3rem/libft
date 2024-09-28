CC=cc
CFLAGS=-Werror -Wextra -Wall
FILES =libft.h, ft_*.c
TARGET=lib

lib:	$(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(TARGET)
fclean:
	rm -f $(TARGET)⏎  