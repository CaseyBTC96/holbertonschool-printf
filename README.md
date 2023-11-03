Project Printf

Context:
This repository was created to be a group project in the first Trimester of Holberton School. 
It is done over the Printf function and consists of three group members working together. 

_Printf

Description:
The function _printf is a variadic function which prints a string according to the standard output like the function printf.

Prototype:
int _printf(const char *format, …);

Conversion Specifiers:
Specifiers				Description
    %c				    Prints a single character
    %s				    Prints a string of characters
    %d				    Prints a decimal number 
    %i				    Prints an integer
    %%			    	    Prints a %

Compile
The command to compile your files is: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

Examples
_printf(“%c”, ‘t’); => prints the character ‘t’
_printf(“%s”, “Holberton”); => prints the string “Holberton”
_printf(“%d”, -15627382); => prints the decimal number “-15627382”


Credits

This project was created by Casey Paul, Adrian Taylor, and Crystal Muyunga

