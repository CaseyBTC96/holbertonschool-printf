# Project Printf

## Context

This repository is a project during the first year of Holberton School.

It has been in done in a trio and consists of coding the printf function.

# _printf

## Description

The function _printf is a variadic function that takes a format string as input among a variable sized list of other values and produce as output a string that corresponds to the format specifier and given input values.

## Prototype

  'int _printf(const char *format, …);'

## Conversion Specifiers

| Specifiers | 	Description |
| ------------ |:--------------:|
|'%c'	       | Prints a single character      |
|'%s'          | Prints a string of characters  |
|'%d'	       | Prints a decimal number        |
|'%i'	       | Prints an integer              |
|'%%'	       | Prints a %                     |
 
## Compile

The command to compile your files is :
 'gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c'

## Examples

- '_printf(“%c”, ‘t’);' => prints the character ‘t’

- '_printf(“%s”, “Holberton”);' => prints the string “Holberton”

- '_printf(“%d”, -15627382);' => prints the decimal number “-15627382”

## Flowchart

![enter image description  here](https://i.imgur.com/7BuqpWs.jpg)
## Credits

This project was created by Casey Paul, Adrian Taylor, and Crystal Muyunga

- Github of Casey Paul : https://github.com/CaseyBTC96

- Github of Adrian Taylor : https://github.com/Abtaylor23

- Github of Crystal Muyunga : https://github.com/Crisstaal
