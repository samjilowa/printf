#include "main.h"

/**
 * kabelo_binary - Converts an unsigned integer to binary and prints it
 * @sam_num: The unsigned integer to be converted and printed
 *
 * Return: The number of characters printed
 */
int kabelo_binary(unsigned int sam_num)
{
    int kabelo_binary_digits = 0;
    int kabelo_char_print = 0;
    unsigned int kabelo_num_copy = sam_num;

    if (sam_num == 0)
    {
        kabelo_char_print += sam_charwriter('0');
        return kabelo_char_print;
    }

    while (kabelo_num_copy > 0)
    {
        kabelo_binary_digits++;
        kabelo_num_copy >>= 1;
    }

    while (kabelo_binary_digits > 0)
    {
        kabelo_binary_digits--;
        kabelo_char_print += sam_charwriter((sam_num >> kabelo_binary_digits) & 1 ? '1' : '0');
    }

    return kabelo_char_print;
}
