#include "checksum.h"
//hahaha oooohehehe
int checksum(char *message)
{
	int c = 0;
	while (*message) {
		c += c ^ (int)(*message);
		message++;
	}
	return c;
}
