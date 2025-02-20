/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 01:09:24 by yabenman          #+#    #+#             */
/*   Updated: 2025/02/20 01:26:06 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# define HEX_LOW "0123456789abcdef"
# define DIGITS "0123456789"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}

int	ft_putnbr_base(long long data, char *base)
{
	int	printed;
	int	base_len;

	printed = 0;
	base_len = 0;
	while (base[base_len]) 
		base_len++;
	
	if (data < 0)
	{
		printed += ft_putchar('-');
		data = -data;
	}
	if (data >= base_len)
		printed += ft_putnbr_base(data / base_len, base);
	return (printed + ft_putchar(base[data % base_len]));
}


int get_printed(const char sp, va_list arg)
{
    int printed = 0;
    
    if (sp == 's')
        printed += ft_putstr(va_arg(arg, char*));
    else if (sp == 'd')
        printed += ft_putnbr_base(va_arg(arg, int), DIGITS);
    else if (sp == 'x')
        printed += ft_putnbr_base((unsigned int)va_arg(arg, unsigned int), HEX_LOW);
    
    return printed;
}


int	ft_printf(const char *str, ...)
{
    int printed;
    int i;
    va_list arg;
    
    printed = 0;
    i = 0;
    
    va_start(arg, str);
    
    while(str[i])
    {
        if(str[i] != '%')
            printed += write(1,&str[i],1);
        else if (str[i] == '%' && str[i + 1] == '%')
        {
            printed += write(1, "%", 1);
            i++; 
        }
        else if(str[i] == '%' && str[i + 1] != '%')
            printed += get_printed(str[++i],arg);
        i++;
    }
    va_end(arg);
    
    return printed; 
}
