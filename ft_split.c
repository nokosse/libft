/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nok <nok@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:50:04 by kvisouth          #+#    #+#             */
/*   Updated: 2022/12/04 15:46:37 by nok              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tab(char **s)
{
	int	i;

	i = 0;
	while (i > 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

static int	is_sep(const char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

/*
** C'est un strlen mais qui ne compte pas les separateurs.
** Compte les separateurs et strlen puis retourne strlen - separateurs.
*/

static size_t	strcnt(const char *s, char c)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (s[i] != '\0')
	{
		while (is_sep(s[i], c) == 1 && s[i])
			i++;
		if (s[i] != '\0')
			cpt++;
		while (is_sep(s[i], c) == 0 && s[i])
			i++;
	}
	return (cpt);
}

/*
**	Count the lenght of the word, then malloc it, then copy
**	The word from *s to return a new char * containing the word.
**	Giving that char * to ft_split who will put that word in the **strs.
**	Similar to strndup but is is not taking a size_t but
**	the separator. 
*/

static char	*put_word(const char *s, char c)
{
	int		wdlen;
	char	*wd;
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[x] != '\0' && is_sep(s[x], c) == 0)
		x++;
	wdlen = x;
	wd = malloc (wdlen * sizeof(char) + 1);
	if (!wd)
		return (NULL);
	while (i < wdlen)
	{
		wd[i] = s[i];
		i++;
	}
	wd[i] = '\0';
	return (wd);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;

	strs = malloc ((sizeof(char *) * (strcnt(s, c) + 1)));
	if (!strs)
	{
		free_tab(strs);
		return (NULL);
	}
	i = 0;
	while (*s != '\0')
	{
		while (is_sep(*s, c) == 1 && *s)
			s++;
		if (*s)
			strs[i++] = put_word(s, c);
		while (is_sep(*s, c) == 0 && *s)
			s++;
	}
	strs[i] = NULL;
	return (strs);
}

// int	main (int ac, char **av)
// {
// 		int	i = 0;
// 		if (ac == 2)
// 		{
// 			char	sep = ' ';
// 			char	**split = ft_split(av[1], sep);
// 			while (split[i])
// 			{
// 				printf("split %d : %s\n",i+1,split[i]);
// 				i++;
// 			}
// 		}
// }