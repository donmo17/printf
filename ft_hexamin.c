#include "ft_printf.h"

size_t	ft_hexamin(const unsigned int n)
{
	if (n / 16)
		return (ft_hexamin(n / 16) + ft_hexamin(n % 16));
	else if (!(n / 10))
		ft_putchar(n + '0');
	else
		ft_putchar((char) n - 10 + 'A');
	return (1);
}