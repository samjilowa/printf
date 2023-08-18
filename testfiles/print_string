#include <stdarg.h>
#include <stdio.h>

void print_string(const char *str,...)
{
	va_list args;
	va_start(args, str);

	while (*str != '\0')
	{
		if (*str == % && *(str + 1) == 's')
		{
			char *arg_str = va_arg(args, char *);
			putchar(*arg_str);
			arg_str++;
		}
		str+=2;
	}
	else
	{
		putchar(*str);
	}
	va_end(args);
}
