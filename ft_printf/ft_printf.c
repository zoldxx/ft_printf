/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dberreby <dberreby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:28:13 by dberreby          #+#    #+#             */
/*   Updated: 2022/12/05 13:33:54 by dberreby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert(va_list set, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(set, int));
	if (c == 's')
		i = ft_putstr(va_arg(set, char *));
	if (c == 'p')
		i = pointeur(va_arg(set, unsigned long));
	if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(set, int));
	if (c == 'u')
		i = ft_unbr(va_arg(set, unsigned int));
	if (c == 'x')
		i = hexamin(va_arg(set, int));
	if (c == 'X')
		i = hexamaj(va_arg(set, int));
	if (c == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	setting;
	int		compteur;
	int		i;

	va_start(setting, s);
	compteur = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			compteur += convert(setting, s[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(s[i]);
			compteur++;
		}
		i++;
	}
	va_end(setting);
	return (compteur);
}
