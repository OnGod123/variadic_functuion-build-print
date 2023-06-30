#ifndef _MAIN_H_
#define _MAIN_H_

char _putchar(int c);
int string_len(const char *string_char);
int _printf(const char *format, ...);
int char_check(int c);
int str_check(char *c);
char *convert_to(char representation[], unsigned int num, int base);
int int_check(int num);
int unsigned_int_check(unsigned int num);
int hexadecimal_lower_check(unsigned int num);
int hexadecimal_upper_check(unsigned int num);
int octal_check(unsigned int num);
int address_check(int num);
#endif
