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

/*
When a character is used in a context where an integer is expected, it is automatically converted to its corresponding ASCII value.
    For example, if the character 'A' is used in an arithmetic operation, it will be treated as the integer 65 (the ASCII value of 'A').
    This is why we can directly print the character variable 'x' using the %d format specifier to get its ASCII value.
*/