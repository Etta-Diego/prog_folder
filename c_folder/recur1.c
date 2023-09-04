#include <stdio.h>

int _strlen_recursion(char *s)
{

int length = 0;

if (*s == '\0')
{

//puts("\n");
return length;

}
return 1 + _strlen_recursion(s + 1);
}

int main()
{

char str[] = "Hello";
int length = _strlen_recursion(str);

puts(str);

return 0;
}
