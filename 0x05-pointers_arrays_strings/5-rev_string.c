#include "main.h"
#include <string.h>

/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = strlen(s);
	char *first = s;
	char *last = s + len - 1;

	while (first < last)
	{
		char tmp = *first;
		*first = *last;
		*last = tmp;
		first++;
		last--;
	}
}
