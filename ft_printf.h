/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulgonz <paulgonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:08:10 by paulgonz          #+#    #+#             */
/*   Updated: 2024/10/18 18:08:11 by paulgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printnbr(int nb);
int	ft_printunbr(unsigned int nb);
int	ft_printhex(unsigned long const nb, char c);
int	ft_condition(char const p, va_list args);
int	ft_printf(char const *p, ...);

#endif