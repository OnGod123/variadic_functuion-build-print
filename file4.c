#include "main.h"

/**
 * hexadecimal_lower_check - _printf hexadecimal placeholder function
 * @num: _printf integer argument to be printed
 *
 * Return: the length of the integer's character
 */
int hexadecimal_lower_check(unsigned int num)
{
	int i = 0;
	int char_len = 0;
	char *num_str;
	
	num_str = convert_to("0123456789abcdef", num, 16);
	
	for (i = 0; num_str[i] != '\0'; i++)
	{
		_putchar(num_str[i]);
		char_len++;
	}
	return(char_len);
}

/**
 * hexadecimal_upper_check - _printf hexadecimal placeholder function
 * @num: _printf integer argument to be printed
 *
 * Return: the length of the integer's character
 */
int hexadecimal_upper_check(unsigned int num)
{
	int i = 0;
	int char_len = 0;
	char *num_str;
	
	num_str =  convert_to("0123456789ABCDEF", num, 16);
	
	for (i = 0; num_str[i] != '\0'; i++)
	{
		_putchar(num_str[i]);
		char_len++;
	}
	return(char_len);
}

/**
 * octal_check - _printf octal placeholder function
 * @num: _printf integer argument to be printed
 *
 * Return: the length of the integer's character
 */
int octal_check(unsigned int num)
{
	int i = 0;
	int char_len = 0;
	char *num_str;
	
	num_str = convert_to("0123456789ABCDEF", num, 8);
	
	for (i = 0; num_str[i] != '\0'; i++)
	{
		_putchar(num_str[i]);
		char_len++;
	}
	return(char_len);
}

/**
 * address_check - _printf variable address placeholder function
 * @num: _printf integer argument to be printed
 *
 * Return: the length of the integer's character
 */
int address_check(int num)
{
	int i = 0;
	int char_len = 0;
	char *num_str;

	num_str =  convert_to("0123456789ABCDEF", num, 10);

	for (i = 0; num_str[i] != '\0'; i++)
	{
		_putchar(num_str[i]);
		char_len++;
	}
	return(char_len);
}
