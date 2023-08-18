#include <stdio.h>
#include <stdarg.h>
#include "print_char.h"

int print_char(va_list args) {
    char c = (char)va_arg(args, int);
    putchar(c);
    return 1;
}

