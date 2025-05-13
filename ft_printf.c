#include "ft_printf.h"



void converter(char c, va_list *ap)
{
    char *s;
    char x;
    int  j;

    if(c == 's')
    { 
        s = va_arg(*ap, char *);
        ft_putstr(s);
    }else if( c == 'c')
    {
        x = va_arg(*ap, int );
        ft_putchar(x);
    }else if(c == 'd')
    {
        j = va_arg(*ap, int );
        ft_putnbr(j);
    }

}

void ft_printf(char *arg ,...)
{
    va_list ap;
    va_start(ap,arg);

    while(*arg)
    {
        if((*arg == '%') && *(arg + 1))
        {
                arg ++ ;
              converter(*arg, &ap);

        }else
        {
            ft_putchar(*arg);
        }
        arg ++ ;
    }
       va_end(ap);
}
