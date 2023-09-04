#include <stdio.h>

/**
* Main - Entry point of a program
*
* Description - A program that prints all possible different combination of three digits
*
* Return 0 (Success)
*/

int main(void)
{

int firstDigit;
int secondDigit;
int thirdDigit;

for (firstDigit = 0; firstDigit <= 9; firstDigit++)
{

for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
{

for (thirdDigit = secondDigit + 1; thirdDigit <= 9; thirdDigit++)
{
putchar(firstDigit + '0');
putchar(secondDigit + '0');
putchar(thirdDigit + '0');

if (firstDigit < 7)
{
putchar(',');
putchar(' ');
}

}
}
}

putchar('\n');


return 0;
} 
