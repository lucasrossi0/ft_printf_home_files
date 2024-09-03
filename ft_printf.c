/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:08:04 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/09/03 19:25:04 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(const char *s, ...)
{
	va_list	arguments;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(arguments, s);
	while (s[i])
	{
		if (s[i] == '%')
			size += ft_format_type(arguments, s);
		else
			size += ft_print_char(*s[i]);
		i++;
	}
	va_end(arguments);
	return (size);
}

int	ft_format_type(va_list arguments, const char letter)
{
	int	size;

	size = 0;
	if (letter == 'c')
		size += ft_print_character(letter);
	else if (letter == 's')
		size += ft_print_string(letter);
		
