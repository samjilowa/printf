#include <stdarg.h>
#include "main.h"
#include "charwriter.h"

/**
 * handle_integer - Handles the formatting and printing of an integer argument.
 * @printed_chars: A pointer to the running total of printed characters.
 * @list: A va_list containong the arguments provided to _printf.
 * @printed_chars: A pointer to an integer storing the total printed chars.
 */

void handle_integer(va_list list, int *printed_chars)
{
	int num = va_arg(list, int);
	int count = kabelo_print_i(num);
	*printed_chars += count;
}
