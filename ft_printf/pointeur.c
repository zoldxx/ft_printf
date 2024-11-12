/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberreby <dberreby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:41:27 by dberreby          #+#    #+#             */
/*   Updated: 2022/12/05 11:53:56 by dberreby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lenpointeur(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	pointeur(unsigned long n)
{
	char	*base;
	char	str[16];
	int		i;
	int		r;

	base = "0123456789abcdef";
	i = lenpointeur(n);
	r = i;
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	str[i] = '\0';
	i--;
	while (n > 0)
	{
		str[i] = base[n % 16];
		n /= 16;
		i--;
	}
	ft_putstr("0x");
	ft_putstr(str);
	return (r + 2);
}
