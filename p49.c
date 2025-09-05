/* Write a C program to read a char and find whether the given char is capital or not. */

#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    x=getchar();
    (x >= 'A' && x <= 'Z') ? printf("%c is a capital letter.\n", x) : printf("%c is not a capital letter.\n", x);

    return 0;
}