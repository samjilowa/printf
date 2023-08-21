#include "main.h"

/**
 * Sam_negative - Prints a negative number
 * @num: The integer to be printed
 * @count: Total count of characters printed
 *
 * Return: The number of characters printed
 */

int Sam_negative(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += sam_charwriter('-');
		num = -num;
	}

	count += kabelo_print_i(num);
	return (count);
}
