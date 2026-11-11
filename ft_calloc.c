/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmarti2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 09:57:42 by anmarti2          #+#    #+#             */
/*   Updated: 2026/04/20 09:57:43 by anmarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			len;
	void			*ptr;
	unsigned char	*p;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	i = 0;
	len = nmemb * size;
	p = (unsigned char *)ptr;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
