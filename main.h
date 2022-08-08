#ifndef _MAIN_H_
#define _MAIN_H_
#define INT_BITS (4 * 8)

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct call - struct call
 * @t: t - flag for data type
 * @f: function - assocated function
 *
 */
typedef struct call
{
	char t;
	int (*f)(char *, va_list, int);
} call_t;

int _printf(const char *format, ...);
int buff_append(char *buff_dest, va_list arg, int buff_count, char type);
int print_buff(char *buff, unsigned int nbuff);
int str_len(char *s);
char *_strcpy(char *dest, char *src);
int print_char(char *buff_dest, va_list arg, int buff_count);
int print_str(char *buff_dest, va_list arg, int buff_count);
int print_int(char *buff_dest, va_list list, int buff_count);
int print_perc(char *buff_dest, va_list arg, int buff_count);
int print_bin(char *buff_dest, va_list arg, int buff_count);
int print_oct(char *buff_dest, va_list arg, int buff_count);
int print_hex(char *buff_dest, va_list arg, int buff_count);
int print_X(char *buff_dest, va_list arg, int buff_count);
int print_uint(char *buff_dest, va_list arg, int buff_count);
int print_rev(char *buff_dest, va_list arg, int buff_count);
int print_R13(char *buff_dest, va_list arg, int buff_count);


#endif
