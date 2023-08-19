#include <stdarg.h>
#include <stdio.h>

void print_string(const char *str,...)
{
	va_list args;
	va_start(args, str);

	while (*str != '\0')
	{
		if (*str == '%' && *(str + 1) == 's')
		{
			char *arg_str = va_arg(args, char *);
			while (*arg_str != '\0')
			{
				putchar(*arg_str);
				arg_str++;
			}
		str+=2;
		}
		else
		{
			putchar(*str);
			str++;
		}
	}
	va_end(args);
}
