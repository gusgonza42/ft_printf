/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:36:13 by gusgonza          #+#    #+#             */
/*   Updated: 2024/03/11 19:36:15 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define DEC_BASE "0123456789"
# define LHEX_BASE "0123456789abcdef"
# define UHEX_BASE "0123456789ABCDEF"

// FORMATS OF PRINT
int		ft_printf(char const *str, ...);
void	ft_putchar_len(char character, int *len);
void	ft_string(char *args, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_unsigned_int(unsigned int nb, int *len);
void	ft_hexadecimal(unsigned int x, int *len, char op);
void	ft_pointer(unsigned long pointer, int *len);

#endif
