*This project has been created as part of the 42 curriculum by aiwane.*

# Libft

## Description

Libft is a custom C library created for the 42 curriculum. The goal of the project is to reimplement a set of commonly used libc functions and to add utility functions that can be reused in later C projects.

This library builds a static archive named `libft.a`. It includes functions for character checks, string handling, memory manipulation, dynamic allocation helpers, file descriptor output, integer/string conversion, string splitting, and singly linked list manipulation.

## Library Overview

The library is organized into three groups.

### Part 1: Libc Functions

These functions reproduce the behavior of selected libc functions with the `ft_` prefix:

- Character checks and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- String functions: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_atoi`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Allocation helpers: `ft_calloc`, `ft_strdup`

### Part 2: Additional Functions

These functions provide useful utilities not included in the same form in libc:

- `ft_substr`: creates a substring from a string
- `ft_strjoin`: joins two strings into a newly allocated string
- `ft_strtrim`: removes selected characters from the beginning and end of a string
- `ft_split`: splits a string into a NULL-terminated array of newly allocated strings
- `ft_itoa`: converts an integer to a newly allocated string
- `ft_strmapi`: creates a new string by applying a function to each character
- `ft_striteri`: applies a function to each character of a string in place
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: output data to a file descriptor

### Part 3: Linked List Functions

The project also includes a singly linked list type:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
} t_list;
```

The linked list functions are:

- `ft_lstnew`: creates a new node
- `ft_lstadd_front`: adds a node to the front of a list
- `ft_lstsize`: counts the nodes in a list
- `ft_lstlast`: returns the last node
- `ft_lstadd_back`: adds a node to the end of a list
- `ft_lstdelone`: deletes one node without deleting the next node
- `ft_lstclear`: deletes a node and all following nodes, then sets the list pointer to NULL
- `ft_lstiter`: applies a function to each node content
- `ft_lstmap`: creates a new list by applying a function to each node content

## Instructions

### Compilation

Run the following command at the root of the repository:

```sh
make
```

This compiles all source files with:

```sh
cc -Wall -Wextra -Werror
```

and creates the static library:

```sh
libft.a
```

### Cleaning Build Files

Remove object files:

```sh
make clean
```

Remove object files and the static library:

```sh
make fclean
```

Rebuild the project from scratch:

```sh
make re
```

### Using the Library

After building `libft.a`, compile another C file with the library:

```sh
cc -Wall -Wextra -Werror main.c libft.a
```

Include the header in your source file:

```c
#include "libft.h"
```

## Resources

The following resources were used as references while studying and implementing this project:

- The C manual pages, such as `man strlen`, `man memset`, `man memcpy`, `man calloc`, and `man write`

### AI Usage

AI assistance was used as a learning and review aid. It was used to clarify C concepts, review edge cases, organize testing ideas, and draft this README. The final implementation was reviewed against the subject requirements, and the code remains the student's responsibility.
