#include "main.h"
#include <string.h>

int check_palindrome(char *, int, int);

/**
 * is_palindrome - calls a wrapper function to check
 * if a string is plaindrome
 * @s: string to be checked by the wraooer function
 *
 * Return: 1 if length of s is 0 or 1 meaning its a
 * palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int first = 0;
	int len = strlen(s);
	int last = len - 1;

	if (len == 0 || len == 1)
		return (1);

	return (check_palindrome(s, first, last));
}

/**
 * check_palindrome - checks recursively if a string
 * is a palindrome
 * @s: string to be checked
 * @first: left index
 * @last: right index
 *
 * Return: 1 if its a palindrome 0 if not
 */
int check_palindrome(char *s, int first, int last)
{
	if (first >= last)
		return (1);
	else if (s[first] == s[last])
		return (check_palindrome(s, first + 1, last - 1));

	return (0);
}
