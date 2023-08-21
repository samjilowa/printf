#include "main.h"

/**
* handle_d - Handles the %d specifier for printf
* @list: va_list containing the arguments
*
* This function is called when the %d specifier is encountered in a format
* string for printf. It retrieves an integer argument from the va_list and
* passes it to the kabelo_print_i function for printing. The kabelo_print_i
* function is responsible for printing the integer and returning the count
* of characters printed.
*
* Return: The count of characters printed by kabelo_print_i
*/


int handle_d(va_list list)
{
	int num = va_arg(list, int);

	return (kabelo_print_i(num));
}
