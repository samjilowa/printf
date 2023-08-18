#include <stdio.h>
#include <stdarg.h>
#include "print_char.h"
intprint_char(va_list args)
{
  char c = (char) va_args (args,int);
  putchar (c);
  return 1 ;
}
