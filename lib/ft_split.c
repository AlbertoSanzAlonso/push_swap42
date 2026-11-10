/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:00:03 by asanz-al          #+#    #+#             */
/*   Updated: 2026/10/26 14:10:13 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	*ft_freegrid(char **grid, int k)
{
	while (k--)
		free(grid[k]);
	free(grid);
	return (NULL);
}

static size_t	ft_allocsize(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**ft_alloc_grid(const char *s, char **container, char c, int size)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while (k < size)
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		container[k] = malloc(j + 1);
		if (!container[k])
			return (ft_freegrid(container, k));
		j = 0;
		k++;
	}
	return (container);
}

static char	**ft_fill_grid(char **dst, char const *src, char c, size_t size)
{
	size_t	i;
	int		j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[i] == c)
		i++;
	while (k < size)
	{
		while (src[i] && src[i] != c)
		{
			dst[k][j] = src[i];
			i++;
			j++;
		}
		dst[k][j] = '\0';
		k++;
		while (src[i] && src[i] == c)
			i++;
		j = 0;
	}
	dst[k] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	nmemb;
	char	**tab;

	if (!s)
		return (NULL);
	if (!c)
	{
		if (*s == '\0')
		{
			tab = malloc(sizeof(char *));
			tab[0] = NULL;
			return (tab);
		}
		tab = malloc(sizeof(char *) * 2);
		if (!tab)
			return (NULL);
		tab[0] = ft_strdup(s);
		tab[1] = NULL;
		return (tab);
	}
	nmemb = ft_allocsize(s, c);
	tab = ft_calloc(nmemb + 1, sizeof(char *));
	tab = ft_alloc_grid(s, tab, c, nmemb);
	return (ft_fill_grid(tab, s, c, nmemb));
}
/*
int	main(void)
{
	char const	*s = "///Hola//que/tal/estas///";
	char	c;
	char	**result;
	int	i;

	c = '/';
	i = 0;
	result = ft_split(s, c);
	while (i < 4)
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
