#include "main.h"

/**
 * print_perc - returns the character
 * @buff_dest: character
 * @arg: list of arguments
 * @buff_count: index of buffer pointer
 * Return: the buffer index
 */
int print_perc(char *buff_dest, va_list arg, int buff_count)
{
	char c = va_arg(arg, int);

	
	c = '%';

	buff_dest[buff_count] = c;

	return (++buff_count);
}
