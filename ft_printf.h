#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_putnbr(const int n);
size_t	ft_putchar(const char c);
size_t	ft_putstr(const char *str);
size_t	ft_strlen(const char *s);
void    ft_printf(char *arg ,...);

#endif