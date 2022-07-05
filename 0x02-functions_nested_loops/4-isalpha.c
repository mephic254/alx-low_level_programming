#include "main.h"

/**
 * _isalpha - checks value of character if lowercase or uppercase
 * @c: character value
 * Return: 1 if lowercase or uppercase 0 if false
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
