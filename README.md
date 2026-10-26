*This project has been created as part of the 42 curriculum by guletill.*

# Libft

## Description

Libft is the first project of the 42 common core. The goal is to write, from
scratch, a static C library (`libft.a`) that will be reused in the following
projects of the curriculum.

The project is split into three parts:

1. **Libc functions** — re-implementations of standard libc functions, with the
   same prototypes and behaviour as described in their man pages, prefixed with
   `ft_`.
2. **Additional functions** — utility functions that are either missing from the
   libc or exist there in a different form (string splitting, joining, trimming,
   integer conversion, output to a file descriptor…).
3. **Linked list** — a small set of functions to manipulate singly linked lists
   built on the `t_list` structure.

Writing these functions by hand is a way to understand how memory, strings and
pointers really work in C, while respecting the 42 Norm, with no global
variables, no memory leaks and no crashes.

## Instructions

### Requirements

- `cc` (gcc or clang)
- `make`
- `ar`

### Compilation

At the root of the repository:

```sh
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # fclean + all
```

Every source file is compiled with `-Wall -Wextra -Werror`, and the library is
created with `ar rcs`.

### Using the library in a project

Include the header in your sources:

```c
#include "libft.h"
```

Then link against the library when compiling:

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

### Testing a function

Each `ft_*.c` file ends with a small test `main` that is commented out so it
does not interfere with the library build. To try a function:

1. Uncomment the block at the bottom of the file (for example `ft_strlen.c`).
2. Build and run it:

   ```sh
   make && cc -Wall -Wextra -Werror ft_strlen.c -L. -lft && ./a.out
   ```

3. Comment the block again before committing.

When a libc equivalent exists, the test prints both results side by side,
for example `ft_strlen("Hello 42") : 8 | strlen : 8`.

## Library description

All prototypes are declared in `libft.h`.

### Part 1 — Libc functions

| Function | Prototype | Description |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int ch)` | Returns 1 if `ch` is a letter, 0 otherwise. |
| `ft_isdigit` | `int ft_isdigit(int ch)` | Returns 1 if `ch` is a digit (`0`–`9`), 0 otherwise. |
| `ft_isalnum` | `int ft_isalnum(int ch)` | Returns 1 if `ch` is a letter or a digit, 0 otherwise. |
| `ft_isascii` | `int ft_isascii(int ch)` | Returns 1 if `ch` is an ASCII character (0–127), 0 otherwise. |
| `ft_isprint` | `int ft_isprint(int ch)` | Returns 1 if `ch` is printable (32–126), 0 otherwise. |
| `ft_strlen` | `size_t ft_strlen(const char *str)` | Returns the length of `str`. |
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | Fills the first `n` bytes of `s` with the byte `c`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Sets the first `n` bytes of `s` to zero. |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest` (areas must not overlap). |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | Copies `n` bytes from `src` to `dest`, handling overlapping areas. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dest, const char *src, size_t size)` | Copies `src` into `dest` (at most `size - 1` chars, NUL-terminated). Returns the length of `src`. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | Appends `src` to `dst` within a buffer of `size`. Returns the length of the string it tried to create. |
| `ft_toupper` | `int ft_toupper(int ch)` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | `int ft_tolower(int ch)` | Converts an uppercase letter to lowercase. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Returns a pointer to the first occurrence of `c` in `s`, or `NULL`. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Returns a pointer to the last occurrence of `c` in `s`, or `NULL`. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares at most `n` characters of `s1` and `s2`. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Searches for the byte `c` in the first `n` bytes of `s`. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of `s1` and `s2`. |
| `ft_strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Finds `needle` in the first `len` characters of `haystack`. |
| `ft_atoi` | `int ft_atoi(const char *nptr)` | Converts the beginning of a string to an `int`. |
| `ft_calloc` | `void *ft_calloc(size_t count, size_t size)` | Allocates an array of `count` elements of `size` bytes, set to zero. |
| `ft_strdup` | `char *ft_strdup(const char *s)` | Returns a newly allocated copy of `s`. |

### Part 2 — Additional functions

| Function | Prototype | Description |
|---|---|---|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a new substring of `s` starting at `start`, of at most `len` characters. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Returns a new string made of `s1` followed by `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Returns a copy of `s1` without the characters of `set` at its beginning and end. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits `s` with the delimiter `c` into a `NULL`-terminated array of new strings. |
| `ft_itoa` | `char *ft_itoa(int n)` | Returns a new string representing the integer `n` (negatives included). |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Returns a new string made of `f` applied to each character of `s` and its index. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies `f` to each character of `s` (by address) and its index, modifying `s` in place. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes the character `c` to the file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes the string `s` to `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes the string `s` to `fd`, followed by a newline. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes the integer `n` to `fd`. |

### Part 3 — Linked list

The list functions use the following structure, declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Prototype | Description |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Allocates a new node holding `content`, with `next` set to `NULL`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Adds `new` at the beginning of the list. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Returns the number of nodes in the list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node of the list. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Adds `new` at the end of the list. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees a node's content with `del`, then the node itself (not the next ones). |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to the content of each node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Builds a new list from `f` applied to each node's content; `del` cleans up on allocation failure. |

## Resources

### References

- Linux man pages, sections 3 (`man 3 strlen`, `man 3 memmove`, `man 3 strlcpy`…):
  <https://man7.org/linux/man-pages/>
- C reference, standard library: <https://en.cppreference.com/w/c>
- 42 Norm (`fr.norm.pdf`) and the Libft subject (version 19.2)
- `norminette`, the official 42 Norm checker: <https://github.com/42School/norminette>

### Use of AI

AI (Claude, by Anthropic) was used for:

- **Test mains**: writing the commented-out `main` functions at the bottom of
  each `ft_*.c` file, used to quickly check each function against the libc.
- **Documentation**: writing this README from the subject's requirements.

The library functions themselves (`ft_*.c`, `libft.h`) and the `Makefile` were
written without AI, to keep the learning focus of the project.
