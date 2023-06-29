#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @b: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char _putchar(int  b)
{
return (write(1, &b, 1));
}

/**
 * _strlen - This function return a length for some string
 * @string_char: pointer char
 *
 * Return: int length
 */
int _strlen(const char *string_char)
{
int i = 0, len = 0;

for (i = 0; string_char[i] != '\0'; i++)
{
len++;
}
return (len);
}
/**
 * convert_to - converts numbers in different base to string
 * @representation: The integer representation
 * @base: The base of the number to be converted
 * num - integer value initialized
 * Return: The string conversion of the number
 */

char *convert_to(char representation[], unsigned int num, int base)
{
int index;
char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
int _remainder;
while (num > 0)
{
_remainder = num % base;
representation[index++] = digits[_remainder];
num /= base;
}
return (representation);
}

