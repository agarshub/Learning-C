/* Write a program to read a char and find whether it is small or not using ascii values.
Note that the ascii value of 'a' is 97 and 'z' is 122.
So if the ascii value of the given char is between 97 and 122 then it is a small letter.
Otherwise it is not a small letter.
*/

#include <stdio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    x=getchar();
    (x >= 97 && x <= 122) ? printf("%c is a small letter.\n", x) : printf("%c is not a small letter.\n", x);

    return 0;
}