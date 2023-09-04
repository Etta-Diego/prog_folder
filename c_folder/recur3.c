#include <stdio.h>

int factorial(int n)
{

int r = 0;
if (n < 0)

return -1;
r = n * factorial(n - 1);

return r;
}


int main()
{

int n;
n = factorial(0);

printf("%d\n", n);

//putchar("x");
//putchar('\n');

return 0;

}
