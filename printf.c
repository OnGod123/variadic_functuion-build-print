#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - print arguements to the terminal
 * @format: a pointer to arguement of characters
 * @...: arguent list
 *
 * return - _printf  returns any data types based on input
 */
int _printf(const char *format, ...)
{
int w, count;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case '%':
	count += printf("%d%%\n", va_arg(args, int));
	break;
case 'd':
	count += printf("%d\n", va_arg(args, int));
	break;
case 'f':
	count += printf("%f\n", va_arg(args, double));
	break;
case 'c':
	count += printf("%c\n", va_arg(args, int));
	break;
case 's':
	count += printf("%s\n", va_arg(args, char*));
	break;
case 'p':
	w = va_arg(args, int);
	count += printf("%p\n", &w);
	break;
case 'o':
	count += printf("%o\n", va_arg(args, int));
	break;
case 'x':
	count += printf("%x\n", va_arg(args, int));
	break;
default:
	_putchar('%');
	_putchar(*format);
	count += 2;
	break;
}
}
else
{
_putchar(*format);
count++;
va_end(args);
}
format++;
}
va_end(args);
return (0);
}

