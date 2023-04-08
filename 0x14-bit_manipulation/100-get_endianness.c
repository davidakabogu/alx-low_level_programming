#include "main.h"

/**
 * get_endianness - this function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test_num = 1;
	char *byte_pointer = (char *) &test_num;

	return ((int)*byte_pointer);
}
