#include "main.h"
#include <stdarg.h>
#include "charwriter.h"

/**
 * handle_format - Processes a custom format string and handles
 * conversion specifiers.
 * @format: The format string containing conversion specifiers.
 * @...: Variable arguments corresponding to the conversion specifiers.
 */

void handle_format(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
			putchar('%');
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(args);

}
