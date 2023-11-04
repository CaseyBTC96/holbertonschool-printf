#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#define BUFF_SIZE 1024

void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);



#endif
