#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new ling
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	
	while (ch <= 'Z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('/n');
}
