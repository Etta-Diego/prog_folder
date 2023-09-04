#include <stdio.h>

int main(void)
{

float sales, cost, profit, loss;

do
{
printf("Enter valid cost price\n");
scanf("%f", &cost);

}
while (cost < 1);

do
{

printf("Enter selling price\n");
scanf("%f", &sales);

}
while (sales < 1);

profit = sales - cost;
loss = cost - sales;

if (sales > cost)
{
printf("You are gaining %.2f\n", profit);
}

if (cost > sales)
{
printf("You are losing %.2f\n", loss);
}

}
