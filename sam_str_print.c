#include "main.h"

/* Implementation for printing strings */

int sam_str_print(char *buffer)
{
    int length = 0;

    if (buffer == NULL)
        buffer = "(null)";
    while (*buffer != '\0')
    {
        sam_charwriter(*buffer);
        buffer++;
        length++;
    }
    return length;
}
