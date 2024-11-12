/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberreby <dberreby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:28:07 by dberreby          #+#    #+#             */
/*   Updated: 2022/12/06 15:23:51 by dberreby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lenhexa(unsigned int n)
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

int	hexamin(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar(base[n]);
	}
	if (n >= 16)
	{
		hexamin(n / 16);
		hexamin(n % 16);
	}
	return (lenhexa(n));
}

int	hexamaj(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n < 16)
	{
		ft_putchar(base[n]);
	}
	if (n >= 16)
	{
		hexamaj(n / 16);
		hexamaj(n % 16);
	}
	return (lenhexa(n));
}
