#include <stdio.h>

int main()

{
float phy, chem, bio, maths, comp, score, percentage;
int total_marks = 500;

printf("Input your score for physics, chemistry, biology, mathematics and computer\n");
if (scanf("%f %f %f %f %f", &phy, &chem, &bio, &maths, &comp) !=5)

{
printf("Invalid input\n");
return 1;

}

score =  phy + chem + bio + maths + comp;
percentage = (score / total_marks) * 100;

if (percentage >= 90)
{
printf("Your score is %.2f with percentage %.2f%%, so your grade is A\n", score, percentage);
}

else if (percentage >= 80)
{
printf("Your score is %.2f with percentage %.2f%%, so your grade is B\n", score, percentage);
}

else if (percentage >= 70)
{
printf("Your score is %.2f with percentage %.2f%%, so your grade is C\n", score, percentage);
}

else if (percentage >= 60)
{
printf("Your score is %.2f with percentage %.2f%%, so your grade is D\n", score, percentage);
}

else if (percentage >= 40)
{
printf("Your score is %.2f with percentage %.2f%%, so your grade is E\n", score, percentage);
}

else if (percentage < 40)
{
printf("Your score is %.2f with percentage %.2f%%, so your grade is F\n", score, percentage);
}

}
