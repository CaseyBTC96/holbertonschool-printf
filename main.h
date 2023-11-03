#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#define BUFF_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);
int set_string(va_list valist);
int _putchar(char c);
int print_percent(__attribute__((unused))va_list valist);


#endif
