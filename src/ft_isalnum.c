/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:45:49 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 16:21:42 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		if (ft_isalnum(atoi(av[1])) == 1)
// 			printf("%s","oui");
// 		else
// 			printf("%s (mettre la valeur ASCII !)","non");
// 	}
// }