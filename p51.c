/* Write a C program to read a character and find if it is small letter or not. */

#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    x=getchar();
    (x >= 'a' && x <= 'z') ? printf("%c is a small letter.\n", x) : printf("%c is not a small letter.\n", x);

    return 0;
}