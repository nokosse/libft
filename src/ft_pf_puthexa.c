/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_puthexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:39:17 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 17:07:14 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_pf_puthex(unsigned long nbr, char caps)
{
	int	len;

	len = 0;
	if (nbr >= 16)
	{
		len += ft_pf_puthex((nbr / 16), caps);
		len += ft_pf_puthex((nbr % 16), caps);
	}
	else
	{
		if (nbr < 10)
			len += ft_pf_putnbr(nbr);
		else
			len += ft_pf_putchar(nbr - 10 + 'a' + caps - 'x');
	}
	return (len);
}
