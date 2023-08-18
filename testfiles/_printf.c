#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include "print_char.h"

int _printf(const char *format, ...)
  va_list args;
int char_count = 0;

va_start(args, format);
while (*format != '\0')
  {
    if (*format == '\%')
      format++;
      {
	if (*format == '\0')
	  {
	    break;
	  }
	
	switch (*format)
	  {
	  case 'c':
	    char_count += print_char(args);
	    break;
	  default:
	    putchar(*format);
	    char_count++;
	    break;
	  }
      }
      else
	putchar(*format);
    char_count++;
  }
format++;
va_end(args);
}
return char_count;
}
