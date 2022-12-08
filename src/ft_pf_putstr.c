/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:49:18 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 16:30:38 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	The difference with the ft_put... of libft, is the type of the functions.
	This one is an int, meanwhile the one of libft is a void.
	Why ? Because we need to count how many characters we are writing
	so ft_printf can return the exact number.
	In case the pointer sent is NULL, it writes (NULL).
*/

int	ft_pf_putstr(char *s)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			write (1, &s[i], 1);
			i++;
		}
		return (i);
	}
	return (ft_pf_putstr("(null)"));
}

// int main(void)
// {
// 	char *s = "abc";
// 	printf("\n%d",ft_putstr(s));
// }