/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusgonza <gusgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:15:14 by gusgonza          #+#    #+#             */
/*   Updated: 2024/04/07 20:20:12 by gusgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h" // Asegúrate de incluir el encabezado de tu función ft_printf

int main() {
    printf("==== Resultados con printf original ====\n\n");

    printf("[Printf] String: Hello, world!\n");

    printf("[Printf] Character: %c\n", 'A');

    printf("[Printf] String: %s\n", "Example");

    printf("[Printf] Integer: %d\n", 42);

    printf("[Printf] Unsigned Integer: %u\n", 12345);

    printf("[Printf] Hexadecimal (lowercase): %x\n", 255);

    printf("[Printf] Hexadecimal (uppercase): %X\n", 255);

    int *ptr = NULL;
    printf("[Printf] Pointer: %p\n", (void *)ptr);

    printf("[Printf] Literal percentage character: %%\n");

    printf("\n\n");

    printf("==== Resultados con tu función ft_printf ====\n\n");

    ft_printf("[Ft_printf] String: Hello, world!\n");

    ft_printf("[Ft_printf] Character: %c\n", 'A');

    ft_printf("[Ft_printf] String: %s\n", "Example");

    ft_printf("[Ft_printf] Integer: %d\n", 42);

    ft_printf("[Ft_printf] Unsigned Integer: %u\n", 12345);

    ft_printf("[Ft_printf] Hexadecimal (lowercase): %x\n", 255);

    ft_printf("[Ft_printf] Hexadecimal (uppercase): %X\n", 255);

    ft_printf("[Ft_printf] Pointer: %p\n", (void *)ptr);

    ft_printf("[Ft_printf] Literal percentage character: %%\n");

    return 0;
}
