/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrachid <lrachid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:48:42 by lrachid           #+#    #+#             */
/*   Updated: 2025/11/16 22:48:47 by lrachid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	ft_printf("Char: %c\n", 'A');
	ft_printf("String: %s\n", "Hello");
	ft_printf("Decimal: %d\n", -42);
	ft_printf("Unsigned: %u\n", 42);
	ft_printf("Hex x: %x\n", 255);
	ft_printf("Hex X: %X\n", 255);
	ft_printf("Pointer: %p\n", (void *)0x1234abcd);
	ft_printf("Percent: %%\n");

	return (0);
}
