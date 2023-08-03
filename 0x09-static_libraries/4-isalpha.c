#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 * Return: 1 if c is an alphabet, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
