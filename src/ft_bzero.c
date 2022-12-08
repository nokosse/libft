/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:40:16 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 16:21:35 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
**	Met 'n' fois a partir de *s le caractere '\0' dans la memoire. 
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
