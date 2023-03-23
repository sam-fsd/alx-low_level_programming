#include "main.h"
#include "ctype.h"

int _isupper(int n)
{
	if (n >= 65 && n <= 90)
		return (1);
	else
		return (0);
}
