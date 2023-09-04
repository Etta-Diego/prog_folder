#include <stdio.h>

int main()
{

int cents, results, n;

do
{

printf("Change owed: \n");
scanf("%d", &cents);

}
while (cents < 0);

//for (int i = 0; i <= cents; i--)


do
//{

//for (n = cents; n > results; n--)
{

if (cents >= 25)
{

cents = (cents / 25);
printf("Number of quarters is %d", cents);

}

else if (cents >= 10) //&& < 25)
{

cents = (cents / 10);
printf("Number of dimes is %d", cents);
}


else if (cents >= 5) //&& < 10)
{

cents = cents / 5;
printf("Number of nickels is %d", cents);
}

else if (cents < 5)
{

cents = (cents / 1);
printf("Number of pennies is %d", cents);
}

}
//printf("\n");
//}

while ( cents < 1);

return 0;
}
