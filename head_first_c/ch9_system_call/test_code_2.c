#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t t;
	time(&t);
	char *at = asctime(localtime(&t));
	
	printf("%s", at);
	
	return 0;
}