#include <stdio.h>
/*
* Main - Entry point
*
* Program to insert an element in an array
i
* Return 0(Always Success)
*/

 #define max 100

void main()

{
int p [max], n, i, k, j;

printf("Enter length of arrays: ");
scanf("%d", &n);

printf("\nEnter %d elements of array\n", n);
for (i = 0; i <= n - 1; i++)
scanf("%d", &p[i]);

printf("\nThe array is: \n");
for (i = 0; i <= n - 1; i++)
printf("%d\n", p[i]);

printf("\nEnter position where to insert: ");
scanf("%d", &k);

k--; /* The position is always one value higher than the subscript, so it is decremented by onr */

for (j = n - 1; j >= k; j--)
p[j + 1] = p[j];
/* Shifting all the elements of the array one position down from the location of insertion */

printf("\nEnter value to insert: ");
scanf("%d", &p[k]);

printf("\nArray after insertion of element: \n");
for (i = 0; i <= n -1; i++)

printf("%d\n", p[i]);

} 
