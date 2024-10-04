CC=cc
CFLAGS=-Werror -Wextra -Wall
FILES =libft.h ft_*.c
TARGET=lib

test:	$(FILES)
	$(CC) $(CFLAGS) $(FILES) -c 
	cc *.o main.c -o $(TARGET)
	rm *.o
	rm *gch
fclean:
	rm -f $(TARGET)
lib: $(FILES)
	$(CC) $(CFLAGS) $(FILES) 
	