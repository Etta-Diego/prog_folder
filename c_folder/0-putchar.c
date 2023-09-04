#include "main.h"

/**
* print_alphabet_x10 - A function that prints 10 times the alphabet
*
* @: return no value
*
* Description - A program that prints 10 times the alphabet in lower case using _putchar
*
*/

void print_alphabet_x10 (void)
{
char alpha = 'a'
int num = 0

for (num = 0; num <= 10; num++)
{

for (alpha = 'a'; alpha <= 'z'; alpha++)
{

_putchar(alpha);
}
}

_putchar('\n');

}
