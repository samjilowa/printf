#include <stdarg.h>
#include "main.h"

/* Implementation of _printf function */

int _printf(const char *format, ...)
{
    int printed_chars = 0;
    va_list list;

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return -1;

    va_start(list, format);

    for (; *format != '\0'; format++)
    {
        if (*format != '%')
        {
            sam_charwriter(*format);
            printed_chars++;
        }
        else
        {
            format++;

            if (*format == 'c')
            {
                char sam_ch = va_arg(list, int);
                sam_charwriter(sam_ch);
                printed_chars++;
            }
            else if (*format == '%')
            {
                sam_charwriter('%');
                printed_chars++;
            }
            else if (*format == 's')
            {
                printed_chars += sam_str_print(va_arg(list, char *));
            }
            else if (*format == 'd' || *format == 'i')
            {
                printed_chars += kabelo_print_i(va_arg(list, int));
            }
        }
    }

    va_end(list);

    return printed_chars;
}
