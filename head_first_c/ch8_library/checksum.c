#include "checksum.h"
//hahaha hehe
int checksum(char *message)
{
	int c = 0;
	while (*message) {
		c += c ^ (int)(*message);
		message++;
	}
	return c;
}
