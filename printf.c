#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that prints to stdout
 * @format: The string to be printed
 *
 * Return: The length of the final string
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int char_len = 0;
	
	va_list arg_list;
	va_start(arg_list, format);
	
	for(i = 0; format[i] != '\0'; i++)
	{
		char charac = format[i];

		if (charac != '%'){
			_putchar(charac);
			char_len++;
		}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				int c_check = char_check(va_arg(arg_list, int));

				char_len += c_check;
			}
			else if(format[i] == 's')
			{
				int s_check = str_check(va_arg(arg_list, char *));

				char_len += s_check;
			}
			else if(format[i] == 'd' || format[i] == 'i')
			{
				int i_check = int_check(va_arg(arg_list, int));
				
				char_len += i_check;
			}
			else if(format[i] == 'u')
			{
				int i_check = unsigned_int_check(va_arg(arg_list, unsigned int));
				
				char_len += i_check;
			}
			else if(format[i] == 'x')
			{
				int i_check = hexadecimal_lower_check(va_arg(arg_list, unsigned int));
				
				char_len += i_check;
			}
			else if(format[i] == 'X')
			{
				int i_check = hexadecimal_upper_check(va_arg(arg_list, unsigned int));
				
				char_len += i_check;
			}
			else if(format[i] == 'o')
			{
				int i_check = octal_check(va_arg(arg_list, unsigned int));
				
				char_len += i_check;
			}
			else if(format[i] == 'p')
			{
				int i_check = address_check(va_arg(arg_list, int));
				
				char_len += i_check;
			}
			else if(format[i] == '%')
			{
				_putchar('%');
				char_len += 1;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				char_len += 2;
			}
		}
	}
	va_end(arg_list);
	return(char_len);
}
