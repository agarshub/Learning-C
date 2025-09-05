/* Write a C program to read a char and find whether it is space or not using its ascii value.
The ascii value of space is 32.
So if the ascii value of the given char is 32 then it is a space character.
*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    (ch == 32) ? printf("It is a space character.\n") : printf("It is not a space character.\n");

    return 0;
}