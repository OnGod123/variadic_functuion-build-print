#include "main.h"

/**
 * char_check - _printf charcter placeholder function
 * @c: _printf character argument to be printed
 *
 * Return: the length of the character (1)
 */
int char_check(int c)
{
        int char_len = 1;

        _putchar(c);
        return(char_len);
}

/**
 * str_check - _printf string placeholder function
 * @c: _printf string argument to be printed
 *
 * Return: the length of the string
 */
int str_check(char *c)
{
        int i = 0;
        int char_len = 0;

        for (i = 0; c[i] != '\0'; i++){
                _putchar(c[i]);
                char_len++;
        }
        return(char_len);
}

/**
 * int_check - _printf signed integer placeholder function
 * @num: _printf signed integer argument to be printed
 *
 * Return: the length of the integer's character
 */
int int_check(int num)
{
        int i = 0;
        int char_len = 0;
        char *num_str;

        if (num < 0)
        {
                num = -1 * (num);
                _putchar('-');
                char_len += 1;
        }
        num_str = convert_to("0123456789ABCDEF", num, 10);

        for (i = 0; num_str[i] != '\0'; i++)
        {
                _putchar(num_str[i]);
                char_len++;
        }
        return(char_len);
}

/**
 * unsigned_int_check - _printf unsigned integer placeholder function
 * @num: _printf unsigned integer argument to be printed
 *
 * Return: the length of the integer's character
 */
int unsigned_int_check(unsigned int num)
{
        int i = 0;
        int char_len = 0;
        char *num_str;

        num_str = convert_to("0123456789ABCDEF", num, 10);

        for (i = 0; num_str[i] != '\0'; i++){
                _putchar(num_str[i]);
                char_len++;
        }
        return(char_len);
}
