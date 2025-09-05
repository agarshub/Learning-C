/* Write a program to read a char and find whether it is digit or not using ascii values. */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    (ch >= 48 && ch <= 58) ? printf("%c is a digit.\n", ch) : printf("%c is not a digit.\n", ch);

    return 0;
}

// note that for a character to be a digit it must be between '0' and '9' in the ASCII table.\
// its ascii value must be between 48 and 57.