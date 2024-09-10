/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:33:55 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/09/10 11:38:12 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_printf(const char *s, ...);
int	ft_format_type(va_list arguments, char *str);

#endif
