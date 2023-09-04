#include <stdio.h>

int main(void)
{
 
int start_size, end_size, num_of_years;

//Prompt user for start size
do
{

printf("Enter population start size\n");
scanf("%d", &start_size);

}
//Reprompt user if input is less than 9
while (start_size < 9);

//Prompt user for end_size
do
{

printf("Enter population end size\n");
scanf("%d", &end_size);

}
//Reprompt user if input is less than 9
while (start_size > end_size);


num_of_years = 0;
while (start_size < end_size)
{

start_size =  start_size + (start_size/3) - (start_size/4);
num_of_years++;
}

printf("The number of years is: %i \n", num_of_years);

return 0;
}
