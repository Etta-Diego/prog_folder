#include <stdio.h>

int comp(int, int)
{

int a, b;

 printf("Enter the first number");       
 scanf("%d",&a);
printf("Enter the second number");                                                  
scanf("%d", &b);                


if (a < b)
{
printf("%d is greater than %d\n", b, a);
}

else if (a == b)
{
 printf("%d is equal to %d\n", a, b); 
}

else if (a > b)
{
 printf("%d is greater than %d\n", a, b);
}

}

int main()
{
int a, b;

comp(a, b);
return 0;

}

