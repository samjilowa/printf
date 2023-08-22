#include "main.h"
#include <stddef.h>
/**
* sam_str_print - Prints a string to the standard output
* @buffer: Pointer to the string to be printed
*
* This function prints each character of the input
* string to the standard output
* using the sam_charwriter function. If the input string is NULL, the function
* prints the "(null)" string. The function returns the number of characters
* printed, excluding the null-terminator.
*
* Return: The number of characters printed
*/

int sam_str_print(char *buffer)
{
	int length = 0;

	if (buffer == NULL)
	buffer = "(null)";

	while (*buffer != '\0')
	{
		sam_charwriter(*buffer);
		buffer++;
		length++;
	}
	return (length);
}
