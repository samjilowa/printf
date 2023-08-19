#include "main.h"

/* Implementation for handling negative numbers */

int Sam_negative(int num)
{
    int count = 0;

    if (num < 0)
    {
        count += sam_charwriter('-');
        num = -num;
    }

    count += kabelo_print_i(num);

    return count;
}
