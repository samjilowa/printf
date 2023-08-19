#include "main.h"

/* Implementation for printing integers */

int kabelo_print_i(int num)
{
    int count = 0;
    int sam_num_copy = num;
    int sam_power = 1;
    int sam_base = 10;
    int sam_digit_count;
    int sam_digit_position;
    int sam_current_digit;

    for (sam_digit_count = 1; sam_num_copy >= (sam_base - 1); sam_digit_count++)
    {
        sam_num_copy = sam_num_copy / sam_base;
        sam_power = sam_power * sam_base;
    }

    for (sam_digit_position = 1; sam_digit_position <= sam_digit_count; sam_digit_position++)
    {
        sam_current_digit = num / sam_power;
        num = num % sam_power;
        sam_power = sam_power / sam_base;
        count += sam_charwriter(sam_current_digit + '0');
    }
    return count;
}
