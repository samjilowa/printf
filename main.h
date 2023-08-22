#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

int sam_charwriter(char c);
int kabelo_print_i(int num);
int sam_str_print(char *buffer);
int Sam_negative(int num);

int _printf(const char *format, ...);

void handle_format(const char *format,...);
void handle_string(va_list list, int *printed_chars);
void handle_integer(va_list, int *printed_chars);

#endif /* MAIN_H */
