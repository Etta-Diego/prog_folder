#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
* main - Entry point of the program
* Terminal program that allows users to create password 
* and also confirm that the passord matches the one created.
*
* Return 0 (success)
*/

int main()
{

int hasNum = 0, hasAlpha = 0, hasSpecChar = 0;
char create_password[100];
char confirm_password[100];
int password;

/* Prompt user for input*/
while (1)
{
printf("Enter your password\n");//should not be less than 6 or more than 15. must contain at least one number, alphabet and special character");
scanf("%s", create_password);


/* Check the length of input*/
if (strlen(create_password) > 15)
{
printf("Password  is too long. Please, enter 6 to 15 characters\n");
continue;/* Restart the loop*/
}

else if (strlen(create_password) < 6)
{
printf("Password  is too short. Please, enter 6 to 15 characters\n");
continue; /* Restart the loop*/
}

/*else if (strlen(create_password) > 15)
{
printf("Password  is too long. Please, enter 6 to 15 characters\n");
break;
}*/

for (int i = 0; create_password[i] != '\0'; i++)
{
if ((create_password[i] >= 'A' && create_password[i] <= 'Z') || (create_password[i] >= 'a' && create_password[i] <= 'z'))
{
hasAlpha = 1;
}

else if (create_password[i] >= '0' && create_password[i] <= '9')
{
hasNum = 1;
}

else 
{
hasSpecChar = 1;
}
}

if (hasNum && hasAlpha && hasSpecChar)
{
//validPassword = 1;
break;
}

else// (!validPassword)
{
printf("Invalid Password. Password must contain atleast one number, alphabet and special character");
hasNum = 0; 
hasAlpha = 0;
hasSpecChar = 0;
}


}
//while (!validPassword);

password = strcmp(create_password, confirm_password);
while (1)
{

printf("Confirm your password\n");
scanf("%s", confirm_password);

if (password == 0)
{
printf("Password Activated!\n");
break;
}

else
{
printf("Password Mismatched!\n");
password = 0;
}
}


return 0;
}
