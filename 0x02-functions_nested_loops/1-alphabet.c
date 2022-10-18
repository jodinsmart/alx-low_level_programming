#include <stdio.h>
#include <stdlib.h>
/**
 *  main - main block
 *  Description: You can only use the putchar function
 *  Return: 0
 */
void print_alphabet(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
}
