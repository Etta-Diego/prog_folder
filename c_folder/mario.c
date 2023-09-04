#include <stdio.h>

int main(void)
{

int i, dot, k, row;

do
{
printf("Enter height from 1 to 8\n");
scanf("%d", &row);
}
while (row >= 9 || row < 1);

for (i = 0; i < row; i++, k = 0)
{

for (dot = 0; dot < (row - 1) - i; dot++)
{
printf(" ");
}

for (k = 0; k <= (2 * i) - i; k++)
{

printf("#");
}

printf("\n"); 

}

}
