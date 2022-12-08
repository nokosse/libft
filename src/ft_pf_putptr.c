/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:55:28 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 17:07:23 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_pf_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_pf_putstr("(nil)"));
	count += ft_pf_putstr("0x");
	count += ft_pf_puthex(ptr, 'x');
	return (count);
}
