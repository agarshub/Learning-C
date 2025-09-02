/* Write a program to read a char and print it */

#include<stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    x=getchar();
    printf("The given charactedr is : ");
    putchar(x);
    return 0;
}

// getchar() is used to read a single character from the standard input (keyboard).
// putchar() is used to print a single character to the standard output (console).