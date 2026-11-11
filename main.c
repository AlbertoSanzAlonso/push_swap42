/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:07:05 by asanz-al          #+#    #+#             */
/*   Updated: 2026/11/10 13:09:02 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*arr;
	int	i;
	int	n;

	if (argc == 1)
		return (0);
	n = count_total(argc, argv);
	if (n == 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	arr = malloc(sizeof(int) * n);
	if (!arr)
		return (1);
	if (!parse_args(argc, argv, arr) || has_duplicates(arr, n))
	{
		free(arr);
		write(2, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (i < n)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
