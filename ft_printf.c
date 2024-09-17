/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:08:04 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/09/17 18:52:40 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_print_char(char c)
{
	int	i;

	i = 0;
	write(1, &c, 1);
	i++;
	return (i);
}

int	ft_print_str(char *s)
{
	int	i;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	arguments;
	int		size;

	size = 0;
	va_start(arguments, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			size += ft_format_type(arguments, (char *)s);
		}
		else
			size += ft_print_char(*s);
		s++;
	}
	va_end(arguments);
	return (size);
}

int	ft_format_type(va_list arguments, char *str)
{
	int	size;

	size = 0;
	if (*str == 'c')
		size += ft_print_char((char) va_arg(arguments, int));
	else if (*str == 's')
		size += ft_print_str(va_arg(arguments, char *));
	else if (*str == 'd' || *str == 'i')
		size += ft_print_int(va_arg(arguments, int));
	else
		return (0);
	return (size);
}
