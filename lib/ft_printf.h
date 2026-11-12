/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:38:05 by asanz-al          #+#    #+#             */
/*   Updated: 2026/10/31 21:12:49 by asanz-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printdec(int dec);
int		ft_printint(int n);
int		ft_printunsign(unsigned int u);
char	*ft_malloc_init(size_t siz);
size_t	ft_numlen(int n);
int		ft_malloc_fill(char *arr, int num, size_t len);
int		ft_puthex(unsigned long long n, const char *base);
int		ft_putchar(int c);
int		ft_printptr(void *n);

#endif
