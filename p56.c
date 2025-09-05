/* Write a program to see if the entered char is Enter or not using ascii value.
The ascii value of Enter key is 10.
So if the ascii value of the given char is 10 then it is an Enter key.
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();
    (ch == 10) ? printf("It is an Enter key.\n") : printf("It is not an Enter key.\n");
    return 0;    
}