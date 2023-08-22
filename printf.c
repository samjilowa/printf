#include <stdarg.h>
#include "main.h"

/**
 * _printf - Implementation of _printf function
 * @format: Format string contining the text and format specifier
 * @...:Additional argumentsto be formatted and printed
 * Return: The total number of characters printed
 */

void handle_format(const char *format, ...);
void handle_string(va_list list, int *printed_chars);
void handle_integer(va_list list, int *printed_chars);

int _printf(const char *format, ...)
{
	va_list list;
	int printed_chars = 0;
	int i = 0;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			sam_charwriter(format[i]);
			printed_chars++;
		}
		else
		{
			i++;

			if (format[i] == '\0' || format[i] == ' ')
			{
				va_end(list);
				return (-1);
			}

			switch (format[i])
			{
				case 'c':
					handle_character(list, &printed_chars);
					break;

				case '%':
					sam_charwriter('%');
					printed_chars++;
					break;

				case 's':
					handle_string(list, &printed_chars);
					break;

				case 'd':
				case 'i':
					handle_integer(list, &printed_chars);
					break;

				default:
					sam_charwriter(format[i]);
					printed_chars++;
					break;

			}

		}

	}
	va_end(list);
	return (printed_chars);
}
