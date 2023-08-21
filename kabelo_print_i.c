#include "main.h"

/**
* kabelo_print_i - Prints an integer to the standard output
* @num: The integer to be printed
*
* This function takes an integer (@num) and prints each digit of the integer
* to the standard output using the sam_charwriter function. The integer is
* broken down into its individual digits, and each digit is printed as a
* character. The function returns the count of characters printed, which
* represents the total number of characters required to display the integer,
* including any negative sign and digits. The function uses division and
* modulo operations to extract and print each digit in the correct order.
*
* Return: The number of characters printed
*/


int kabelo_print_i(int num)
{
	int count = 0;
	int sam_num_copy = num;
	int sam_power = 1;
	int sam_base = 10;
	int sam_digit_count;
	int sam_digit_position;
	int sam_current_digit;

	for (sam_digit_count = 1; sam_num_copy >= (sam_base - 1); sam_digit_count++)
	{
		sam_num_copy = sam_num_copy / sam_base;
		sam_power = sam_power * sam_base;
	}

	for (sam_digit_position = 1; sam_digit_position
	<= sam_digit_count; sam_digit_position++)
	{
		sam_current_digit = num / sam_power;
		num = num % sam_power;
		sam_power = sam_power / sam_base;
		count += sam_charwriter(sam_current_digit + '0');
	}
	return (count);
}
