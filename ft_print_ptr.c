/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:32:53 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/09/25 16:22:25 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		len += ft_print_str("(nil)");
		return (len);
	}
	len += ft_print_str("0x");
	len += ft_print_hex((unsigned long)ptr, 'x');
	return (len);
}
