#include "holberton.h"
/**
*_puts - printsa string
*@str: pionter to the string to print
*retirn mothing
*/

void _puts(char *str)
{
    int i = 0;
    
    while(str[i])
    {
        _putchar(str[i]);
        i++;
    }
}