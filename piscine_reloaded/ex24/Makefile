# Variables for compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCS = -I includes

# Final binary
TARGET = libft.a

# Source objects
SRC_DIR = srcs
SRCS = $(addprefix $(SRC_DIR)/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	ar rcs $(TARGET) $(OBJS)

# Compilation
%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

# Protected words
.PHONY: all clean fclean re

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all