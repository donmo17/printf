#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *x, ...);
int		ft_putchar(char c);
int     ft_putnbr(int n);
int     ft_putstr(char *s);
int	    ft_puthexamaj(const unsigned int n);
int	    ft_puthexamin(const unsigned int n);
size_t	ft_strlen( const char *theString );
int	    ft_putunbr(const unsigned int n);
int	    ft_putpointer(void *pointer);

#endif