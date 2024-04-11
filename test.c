/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:15:14 by gusgonza          #+#    #+#             */
/*   Updated: 2024/04/11 17:38:47 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main() {
	printf("==== Results with original printf ====\n\n");

	printf("[Printf] String: Hello, world!\n");

	printf("[Printf] Character: %c\n", 'A');

	printf("[Printf] String: %s\n", "Example");

	printf("[Printf] Integer: %d\n", 42);

	printf("[Printf] MAX Integer: %d\n", 2147483647);

	printf("[Printf] MIN Integer: %ld\n", -2147483648);

	printf("[Printf] Unsigned Integer: %u\n", -12345);

	printf("[Printf] Unsigned Integer: %u\n", 2147483647);

	printf("[Printf] Hexadecimal (lowercase): %x\n", 255);

	printf("[Printf] Hexadecimal (uppercase): %X\n", 255);

	int *ptr;
	int a = 12;

	ptr = &a;
	printf("[Printf] Pointer: %p\n GG", (void *)ptr);

	printf("[Printf] Literal percentage character: %%\n");

	printf("\n\n");

	printf("==== Results with your ft_printf function ====\n\n");

	ft_printf("[Ft_printf] String: Hello, world!\n");

	ft_printf("[Ft_printf] Character: %c\n", 'A');

	ft_printf("[Ft_printf] String: %s\n", "Example");

	ft_printf("[Ft_printf] Integer: %d\n", 42);

	ft_printf("[Ft_printf] MAX Integer: %d\n", 2147483647);

	ft_printf("[Ft_printf] MIN Integer: %d\n", -2147483648);

	ft_printf("[Ft_printf] Unsigned Integer: %u\n", -12345);

	ft_printf("[Ft_printf] Unsigned Integer: %u\n", 2147483647);

	ft_printf("[Ft_printf] Hexadecimal (lowercase): %x\n", 255);

	ft_printf("[Ft_printf] Hexadecimal (uppercase): %X\n", 255);

	ft_printf("[Ft_printf] Pointer: %p gg\n ", (void *)ptr);

	ft_printf("[Ft_printf] Literal percentage character: %%\n");


	return 0;
}
