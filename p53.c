/* Write a program to read a char and find whether it is space or not. */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    (ch == ' ') ? printf("It is a space character.\n") : printf("It is not a space character.\n");

    return 0;
}