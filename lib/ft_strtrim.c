/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:50:23 by asanz-al          #+#    #+#             */
/*   Updated: 2026/10/14 22:59:36 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_start_str(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr((char *)set, (int)s1[i]) != NULL)
	{
		i++;
	}
	return (i);
}

static int	ft_end_str(char const *s1, char const *set, int len)
{
	int	i;

	i = 0;
	while (len > 0 && ft_strchr((char *)set, (int)s1[len - 1]) != NULL)
	{
		len--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strnew;
	int		s1_len;
	int		start;
	int		end;
	int		i;

	i = 0;
	s1_len = ft_strlen((char *)s1);
	start = ft_start_str(s1, set);
	end = ft_end_str(s1, set, s1_len);
	if (start + end > s1_len)
		return (ft_strdup(""));
	strnew = malloc(s1_len - (end + start) + 1);
	if (!strnew)
		return (NULL);
	while (i < s1_len - (end + start))
	{
		strnew[i] = s1[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
/*
int	main(void)
{
	char const	*s1 = "..,-..ABCDE..,-..";
	char const	*set = ".,-" ;
	char	*result;
	
	result = ft_strtrim(s1, set);
	printf("El resultado es %s\n", result);
	free(result);

	return (0);
}*/
