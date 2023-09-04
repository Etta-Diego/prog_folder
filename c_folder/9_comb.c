#include <stdio.h>

/**
* Main - Entry point of a program
*
* Description - A program that prints all possible different combination of two digits
*
* Return 0 (Success)
*/

int main(void)
{

int firstDigit;
int secondDigit;

for (firstDigit = 0; firstDigit <= 9; firstDigit++)
{

for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');

if (firstDigit < 8)
{
putchar(',');
putchar(' ');
}

}
}

putchar('\n');


return 0;
} 
