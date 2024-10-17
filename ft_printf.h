#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printchar(char c);
int ft_printstr(char *str);
int ft_printnbr(int nb);
int ft_printunbr(unsigned int nb);
int ft_printhex(unsigned long const nb, char c);

#endif