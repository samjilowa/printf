#include "main.h"

/**
 * kabelo_negative - Prints a negative integer
 * @num: The integer to be printed
 *
 * Return: The number of characters printed
 */
int kabelo_negative(int num)
{
    int kabelo_char_print = 0;

    if (num < 0)
    {
        kabelo_char_print += sam_charwriter('-');
        num = -num;
    }

    kabelo_char_print += kabelo_positive(num);
    return kabelo_char_print;
}
