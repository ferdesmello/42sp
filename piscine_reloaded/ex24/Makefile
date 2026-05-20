# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/20 14:35:05 by ferde-so          #+#    #+#              #
#    Updated: 2026/05/20 14:35:06 by ferde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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