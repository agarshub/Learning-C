/* Write a C program to read a char and find whether it is capital or not using its ascii values..
Note that the ascii value of 'A' is 65 and 'Z' is 90.
So if the ascii value of the given char is between 65 and 90 then it is a capital letter.
Otherwise it is not a capital letter.
*/

#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    x=getchar();
    (x >= 65 && x <= 90) ? printf("%c is a capital letter.\n", x) : printf("%c is not a capital letter.\n", x);

    return 0;
}