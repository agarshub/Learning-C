/* Write a program to read character and find its ascii value. */

#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    printf("The ASCII value of %c is: %d\n", x, x);
    return 0;
}