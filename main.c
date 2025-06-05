/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdekmak <mdekmak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:14:53 by mdekmak           #+#    #+#             */
/*   Updated: 2025/06/05 11:27:52 by mdekmak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main() {
	int chars_printed;
	
	// Test 1: Basic functionality with all format specifiers
	chars_printed = ft_printf("Hello %s! Your score is %d and your grade is %c.\n", "Alice", 95, 'A');
	ft_printf("Chars printed: %d\n\n", chars_printed);
	
	// Test 2: Numbers - positive, negative, zero
	ft_printf("Positive number: %d\n", 42);
	ft_printf("Negative number: %d\n", -42);
	ft_printf("Zero: %d\n\n", 0);
	
	// Test 3: String tests including NULL
	ft_printf("Normal string: %s\n", "Hello, world!");
	ft_printf("Empty string: %s\n", "");
	ft_printf("NULL string: %s\n\n", NULL);
	
	// Test 4: Characters
	ft_printf("Character test: %c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
	ft_printf("Special chars: %c%c%c\n\n", ' ', '\t', '!');
	
	// Test 5: Percent sign
	ft_printf("Percent sign test: 100%% complete\n");
	ft_printf("Multiple percent signs: %%%%%%%%%%\n\n");
	
	// Test 6: Mixed format specifiers
	chars_printed = ft_printf("Mixed: %s has %d %c's and is %d%% complete.\n", 
		"Project", 5, 'A', 90);
	ft_printf("Chars printed: %d\n\n", chars_printed);
	
	// Test 7: Edge cases
	ft_printf("No specifiers in this string.\n");
	ft_printf("Multiple adjacent specifiers: %d%s%c%%\n", 123, "test", 'X');
	ft_printf("Format specifier at end: %d\n", 42);
	
	// Test 8: Pointer printing
	int x = 42;
	ft_printf("Pointer test: %p\n", (void *)&x);
	ft_printf("NULL pointer test: %p\n", NULL);
	// Test 9: Hexadecimal printing
	ft_printf("Hexadecimal test: %x %X\n", 255, 255);
	ft_printf("Zero in hex: %x\n", 0);
	// Test 10: Unsigned integers
	ft_printf("Unsigned integer test: %u\n", 4294967295U);
	ft_printf("Negative number as unsigned: %u\n", -1);


	return 0;
}
