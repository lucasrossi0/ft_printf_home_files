/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:33:55 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/09/17 18:45:23 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr(int n);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_printf(const char *s, ...);
int		ft_format_type(va_list arguments, char *str);
int		ft_int_len(int n);
int		ft_print_int(int n);

#endif
