/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:42:04 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/09/17 18:42:43 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int	ft_int_len(int n)
{
	int	len;

	len = (n <= 0);  // Account for the negative sign or zero
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)  // Handle INT_MIN explicitly
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_print_char((n % 10) + '0');
}

int	ft_print_int(int n)
{
	int	len;

	len = ft_int_len(n);
	ft_putnbr(n);
	return (len);
}

