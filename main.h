#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...);

/**
 * struct format - This is a typedef struct.
 * @opt: Pointer type char.
 * @call_fun: Pointer to call the function
 */
typedef struct format
{
	char *opt;
	int (*call_fun)();
} format_t;

int _printf(const char *format, ...);
int set_string(va_list valist);
int _putchar(char c);
int print_percent(__attribute__((unused)), va_list valist);
int parse_format(const char *format, format_t get_opt[], va_list valist);
int set_char(va_list valist);
int set_decimal(va_list valist);
int length_of_integer(int n);
int get_length(char *str __attribute__((unused)), va_list valist);
#endif
