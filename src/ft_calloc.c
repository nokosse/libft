/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:01:59 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/08 17:04:42 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	int		len;

	if (size != 0 && nmemb != 0 && (nmemb * size) / size != nmemb)
		return (NULL);
	len = nmemb * size;
	p = malloc(len);
	if (!p)
		return (NULL);
	ft_bzero(p, len);
	return (p);
}
