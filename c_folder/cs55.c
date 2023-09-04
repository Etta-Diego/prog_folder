#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // TODO: Prompt for start size
    int start_size
do

{
    start_size = get_int("Enter population start size, number must be greater than 9: ");
}

//Reprompt for end_size if number is less than 9
while (start_size < 9);

    // TODO: Prompt for end size
int end_size
do

{
    end_size = get_int("Enter population end_size, number must be greater than start_size: ");
}

// Reprompt for end_size, if number is less than start_size
while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
int years = 0;
while (start_size < end_size)
{
    start_size = start_size - (start_size/3) - (start_size/4);
    years++;
}
    // TODO: Print number of years
printf("Number of years: %d\n", years)
}

