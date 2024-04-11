/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:36:13 by gusgonza          #+#    #+#             */
/*   Updated: 2024/04/11 17:42:25 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define DEC_BASE "0123456789"
# define LHEX_BASE "0123456789abcdef"
# define UHEX_BASE "0123456789ABCDEF"

// FORMATS OF PRINT
int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
long	ft_putnbr(long nb);
long	ft_puthexa(unsigned long nb, char *base, int isptr);

#endif
