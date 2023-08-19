#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/* Implementation of _printf function */
int _printf(const char *format, ...)
{
    int kabelo_char_print = 0;
    va_list list;

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return -1;

    va_start(list, format);

    for (; *format != '\0'; format++)
    {
        if (*format != '%')
        {
            kabelo_char_print += sam_charwriter(*format);
        }
        else
        {
            format++;

            if (*format == 'c')
            {
                char sam_ch = va_arg(list, int);
                kabelo_char_print += sam_charwriter(sam_ch);
            }
            else if (*format == '%')
            {
                kabelo_char_print += sam_charwriter('%');
            }
            else if (*format == 's')
            {
                kabelo_char_print += sam_str_print(va_arg(list, char *));
            }
            else if (*format == 'd' || *format == 'i')
            {
                int sam_num = va_arg(list, int);
                kabelo_char_print += kabelo_negative(sam_num);
            }
            else if (*format == 'b')
            {
                unsigned int sam_num = va_arg(list, unsigned int);
                kabelo_char_print += kabelo_binary(sam_num);
            }
        }
    }

    va_end(list);

    return kabelo_char_print;
}
