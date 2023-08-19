#include "main.h"

/* Implementation for handling %d specifier */

int handle_d(va_list list)
{
    int num = va_arg(list, int);
    return kabelo_print_i(num);
}
