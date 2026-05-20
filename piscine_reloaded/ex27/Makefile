# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ferde-so <ferde-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/20 14:35:29 by ferde-so          #+#    #+#              #
#    Updated: 2026/05/20 14:35:30 by ferde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables for compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Final binary
TARGET = ft_display_file

# Source objects
SRCS = main.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# Compilation
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Protected words
.PHONY: all clean fclean re

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all