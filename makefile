CC=cc
CFLAGS=-Werror -Wextra -Wall
FILES =libft.h ft_*.c
TARGET=libft.a

$(TARGET):	$(FILES)
	$(CC) $(CFLAGS) $(FILES) -c
	ar rcs $(TARGET) *.o
clean:
	rm -f *.o && rm -f *gch
fclean: clean
	rm -f $(TARGET)
all: $(TARGET)
re: fclean all
