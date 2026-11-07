# 42

My exercises and projects at [42 Barcelona](https://www.42barcelona.com/), in C and shell, from the Discovery piscine to the first projects of the common core. Login: `jubonet-`.

| project | what it is | state |
|---|---|---|
| [libft](Cursus/libft) | my own C library: 43 functions from libc and beyond, plus linked lists (bonus) | Norm OK, `make` and `make bonus` build |
| [ft_printf](Cursus/ft_printf) | a `printf` for `%c %s %p %d %i %u %x %X %%`, built on libft | Norm OK; output and return value match `printf` on the cases below |
| [Get Next Line](Cursus/Get%20Next%20Line) | read a file descriptor one line at a time; bonus: several descriptors at once | Norm OK; no leaks under valgrind |
| [Piscine Reloaded](Cursus/Piscine%20Reloaded) | refresher of the piscine before the common core | exercises ex00-ex27 |
| [Piscine 42](Piscine%2042) | the four-week C piscine: Shell00-01, C00-C04, Rush00, Rush02 | as submitted |
| [Discovery](Discovery) | the Discovery piscine: shell basics and small challenges | as submitted |

## Common core

### libft

```bash
cd Cursus/libft
make          # libft.a with the 34 mandatory functions
make bonus    # adds the 9 linked-list functions
```

It covers character tests (`ft_isalpha`…), memory (`ft_memset`, `ft_memmove`, `ft_calloc`…), strings (`ft_strlcpy`, `ft_strnstr`, `ft_split`, `ft_strtrim`, `ft_itoa`…), output to file descriptors (`ft_putnbr_fd`…) and lists (`ft_lstnew`, `ft_lstmap`…).

### ft_printf

```bash
cd Cursus/ft_printf
make          # libftprintf.a, including its own copy of libft
```

Checked against the system `printf` on 16 cases, comparing both the printed text and the return value: `%c` with `'\0'`, `%s` with `NULL` and `""`, `%p` with `NULL` and `ULONG_MAX`, `INT_MIN`/`INT_MAX`, `UINT_MAX`, `-1` as `%u`, hexadecimal in both cases, and `%%`. All matched, and valgrind reported no errors.

### Get Next Line

```c
char *get_next_line(int fd);   // the next line, including '\n', or NULL at the end
```

```bash
cd "Cursus/Get Next Line"
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c
```

Text read from `fd` accumulates in a static `stash` until it holds a `'\n'`. The line is cut from the front and the rest is kept for the next call. The bonus keeps one `stash` per file descriptor, so several files can be read in turns.

Tested with `BUFFER_SIZE` 1, 3, 42, 9999 and 10,000,000:
- on the sample files, an empty file, a file without a final newline, a file of only newlines, 200 KB of text and standard input, every run reproduced the input exactly;
- valgrind reported no leaks in the mandatory part, the bonus with three files read in turns, or when `read` fails (a closed descriptor, a directory).

## Piscine

`Piscine 42/` holds the C modules C00 to C04, the shell modules Shell00 and Shell01, and two group projects:
- **Rush00** draws rectangles with characters.
- **Rush02** converts numbers to English words using a dictionary file. `Rush02` and `Rush02v1` are two versions of the same project.

The `.tar` files in the shell exercises are part of what those exercises ask to submit.

## Norm

All C code in the common core follows the [42 Norm](https://github.com/42School/norminette) and is checked with `norminette`. The exceptions are the test programs (`main.c`), which are not part of what is submitted.
