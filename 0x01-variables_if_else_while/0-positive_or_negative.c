#include <stdlib.h>
#include <time.h>
/* main - accept a input n  to check whether is positive negative zero */

/* return: positve zero negative*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else 
	{
		printf("is negative\n");
	}
	return (0);
