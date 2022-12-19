#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int collect = 0;
	int i;
	char reverse =s[0];

	while( *s != '\0')
		collect++;
	for (i = 0; i< collect; i++)
	{
		collect--;
		reverse = s[i];
		s[i] = s[collect];
		s[collect] = reverse;
	}
}
