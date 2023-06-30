#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char _putchar(int c)
{
    return(write(1, &c, 1));
}

/**
 * string_len - This function return a length for some string
 * @string_char: pointer char
 *
 * Return: int length
 */
int string_len(const char *string_char)
{
    int i = 0, len = 0;

    for (i = 0; string_char[i] != '\0'; i++)
    {
        len++;
    }
    return(len);
}

/**
 * convert_to - converts numbers in different base to string
 * @representation: The integer representation
 * @base: The base of the number to be converted
 *
 * Return: The string conversion of the number
 */
char *convert_to(char representation[], unsigned int num, int base)
{
        char *ptr;
        static char buffer[128];
        int mod = 0;

        ptr = &buffer[127];
        *ptr = '\0';

        while (num != 0)
        {
                mod = num % base;
                *--ptr = representation[mod];
                num /= base;
        }
        return (ptr);
}
