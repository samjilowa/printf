#include <stddef.h>
#include "main.h"

/**
 * sam_str_print - Prints a string
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */
int sam_str_print(char *str)
{
    if (str == NULL)
        str = "(null)";

    int kabelo_char_print = 0;

    while (*str)
    {
        kabelo_char_print += sam_charwriter(*str);
        str++;
    }

    return kabelo_char_print;
}
