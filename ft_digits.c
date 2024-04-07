/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:35:00 by gusgonza          #+#    #+#             */
/*   Updated: 2024/03/11 19:37:07 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_putnbr(long nb)
{
	int	length;
	int	check;

	length = 0;
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		length++;
		nb = -nb;
	}
	if (nb > 9)
	{
		check = ft_putnbr(nb / 10);
		if (check == -1 || ft_putchar((nb % 10) + 48) == -1)
			return (-1);
		length += check + 1;
	}
	else
	{
		if (ft_putchar(nb + 48) == -1)
			return (-1);
		length++;
	}
	return (length);
}
