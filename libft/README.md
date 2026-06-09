*This project has been created as part of the 42 curriculum by ferde-so.*

## Description

`libft` is a custom implementation of a selection of C standard library functions, built to deepen the student's knowledge of pointers, memory management, and string manipulation in C. The goal of this project is to recreate fundamental functions from `<string.h>`, `<stdlib.h>`, and `<unistd.h>` with the same behavior as the original library, and other functions with no direct counterpart in typical C libraries.

This repository includes functions for:
- character checks and conversions (`ft_isalpha`, `ft_isdigit`, `ft_tolower`, `ft_toupper`, etc.)
- memory operations (`ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_calloc`, etc.)
- string handling (`ft_strlen`, `ft_strlcpy`, `ft_strjoin`, `ft_split`, `ft_strtrim`, etc.)
- output utilities (`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`)
- linked list manipulation (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstmap`, etc.)

## Instructions

To compile and use the library:

1. Open a terminal in the `libft` directory.
2. Run `make` to build the library archive `libft.a`.
3. Link `libft.a` with your own C programs by adding `-L . -lft` to the compilation command.

`-L /path/` : Directs the linker where to search for your custom binary libraries.

`-l[name]` : Links a specific library (e.g., `-lfoo` looks for `libfoo.a` or `libfoo.so`).

Example:

```sh
make
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

or, simply:

```sh
make
cc -Wall -Wextra -Werror main.c libft.a -o my_program
```

To clean build files:

```sh
make clean
```

To remove compiled objects and the library:

```sh
make fclean
```

To rebuild everything from scratch:

```sh
make re
```

## Resources

Classic references used during development:
- C standard library documentation (`man libc`, `man strcpy`, `man malloc`, etc.)
- The 42 Network project pdf's.
- Online C learning resources such as `w3schools.com`, `geeksforgeeks.org`, and `stackoverflow.com`.

AI usage:
- AI assistance was used in many instances, from discussion of topics, errors, ideas, problems, and improvements, to explanations, research, tests, and to help draft the README content.

- But mostly to search for learning resources and to explain problems in the code (Why it doesn't work?).
