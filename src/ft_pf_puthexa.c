/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_puthexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:39:17 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 16:30:32 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	It convert our nbr (decimal) into a hex, writing it.
	The last line is writing numbers superior to 10, which are
	ABCDEF in hex. And it's turning the letter into caps or not.
*/

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

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		printf("\nlen : %d\n",ft_puthex(atoi(av[1]),'X'));
// 	}
// }