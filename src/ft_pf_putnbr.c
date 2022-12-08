/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 22:43:11 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 17:07:20 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_pf_putnbr(long int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_pf_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		len += ft_pf_putnbr(nb / 10);
		len += ft_pf_putnbr(nb % 10);
	}
	else
		len += ft_pf_putchar(nb + 48);
	return (len);
}
