#include "main.h"

/**
 * get_endianness - get endianness of the system
 * Return: 1 if big endian or 0 if little endian
*/
int get_endianness(void)
{
	unsigned int result = 0x1122;
	unsigned char *LWA = (unsigned char *)&result;

	if (*LWA == 0x11)
		return (0);
	return (1);
}
