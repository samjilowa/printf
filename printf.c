#include <stdarg.h>
#include "main.h"

/**
 * _printf - Implementation of _printf function
 * @format: character pointer
 * Return: Printed Chars
 */

int _printf(const char *format, ...)
{
    int printed_chars = 0;
    va_list list;
    int i = 0;

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    va_start(list, format);

    for (i= 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            sam_charwriter(format[i]);
            printed_chars++;
        }
        else
        {
            i++;

            if (format[i] == 'c')
            {
                char sam_ch = va_arg(list, int);
                sam_charwriter(sam_ch);
                printed_chars++;
            }
            else if (format[i] == '%')
            {
                sam_charwriter('%');
                printed_chars++;
            }
            else if (format[i] == 's')
            {
                printed_chars += sam_str_print(va_arg(list, char *));
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
int sam_num = va_arg(list, int);
                printed_chars += Sam_negative(sam_num);
            }
        }
    }

    va_end(list);

    return printed_chars;
}
