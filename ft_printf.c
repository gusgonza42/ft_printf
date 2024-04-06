/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:29:04 by gusgonza          #+#    #+#             */
/*   Updated: 2024/03/11 19:29:06 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	int		char_pos;
	int		chars_written;
	int		total_chars;
	va_list	args;

	char_pos = 0;
	chars_written = 0;
	total_chars = 0;
	va_start(args, format);
	while (format[char_pos] != '\0')
	{
		if (format[char_pos] == '%')
			chars_written = ft_format_check(format[++char_pos], args);
		else
			chars_written = write(1, &format[char_pos], 1);
		if (chars_written == -1)
			return (-1);
		total_chars += chars_written;
		char_pos++;
	}
	va_end(args);
	return (total_chars);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ptr;

	printf("=========== Test 1: Caracteres básicos ===========\n");
	printf("printf: %c\n", 'A');
	ft_printf("ft_printf: %c\n", 'A');
	printf("\n=========== Test 2: Cadenas de caracteres ===========\n");
	printf("printf: %s\n", "Hola, mundo!");
	ft_printf("ft_printf: %s\n", "Hola, mundo!");
	printf("\n=========== Test 3: Números enteros ===========\n");
	printf("printf: %d\n", 42);
	ft_printf("ft_printf: %d\n", 42);
	printf("\n=========== Test 4: Números flotantes ===========\n");
	printf("printf: %f\n", 3.14159);
	ft_printf("ft_printf: %f\n", 3.14159);
	printf("\n=========== Test 5: Hexadecimales ===========\n");
	printf("printf: %x\n", 255);
	ft_printf("ft_printf: %x\n", 255);
	printf("\n=========== Test 6: Punteros ===========\n");
	ptr = NULL;
	printf("printf: %p\n", (void *)ptr);
	ft_printf("ft_printf: %p\n", (void *)ptr);
	printf("\n=========== Test 7: Modificadores de longitud ===========\n");
	printf("printf: %lld\n", (long long)123456789012345);
	ft_printf("ft_printf: %lld\n", (long long)123456789012345);
	printf("\n=========== Test 8: Especificadores de formato personalizados ===========\n");
	printf("printf: %x\n", 42);
	ft_printf("ft_printf: %x\n", 42);
	return (0);
}
*/
