#include <stdarg.h>
#include "main.h"
#include "charwriter.h"

/**
 * handle_string - Handles the formstting and printing of a string.
 * @list: The va_list containing the string argument.
 * @printed_chars: A pointer to the running total of printed characters.
 */

void handle_string(va_list list, int *printed_chars)
{
	chars *str = va_arg(list, char char *);

	if (str == NULL)
	{
		sam_str_print("(null)");
		*printed_chars += 6;
	}
	else
	{
		*printed_chars += sam_str_print(str);
	}

}
