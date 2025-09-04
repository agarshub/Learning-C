/* Write a program to find a character & find whether it is digit or not. */

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    (ch >= '0' && ch <= '9') ? printf("%c is a digit.\n", ch) : printf("%c is not a digit.\n", ch);
    return 0;
}

// note that for a character to be a digit it must be between '0' and '9' in the ASCII table.
// its ascii value must be between 48 and 57.
// we can also use the ascii values directly like (ch >= 48 && ch <= 57) instead of (ch >= '0' && ch <= '9').
// but using character literals like '0' and '9' makes the code more readable and understandable.