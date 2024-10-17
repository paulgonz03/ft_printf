#include "ft_printf.h"

int ft_condition(char const p, va_list args)
{
    if (p == 'c')
        return(ft_printchar(va_arg(args,int)));
    if (p == 's')
        return(ft_printstr(va_arg(args, char *)));
    if (p == 'd' || p == 'i')
        return (ft_printnbr(va_arg(args, int)));
    if (p == 'u')
        return (ft_printunbr(va_arg(args, int)));
    if (p == 'x' || p == 'X')
        return (ft_printhex(va_arg(args, unsigned int), p));
    if (p == 'p')
        return (ft_printhex(va_arg(args, unsigned long int), p));
    if (p == '%')
        return (write (1, "%", 1));
    return (0);
}

int ft_printf(char const *p, ...)
{
    va_list args;
    int res;
    int counter;

    va_start(args, p);
    counter = 0;
    while (*p)
    {
        if (*p == '%')
            res = ft_condition(*(++p), args);
        else
            res = write (1, &p, 1);
        counter += res;
        p++;
    }
    va_end(args);
    return(counter);
}
