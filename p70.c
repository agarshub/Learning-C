/* Write a program to read the character whether its upper or not using ASCII code. */

#include<stdio.h>
int main()
{
    char x;
    printf("Enter the char: ");
    x=getchar();

    if((x>=65)&&(x<=90))
    {
        printf("Upper\n");
    }
    else
    {
        printf("Not Upper\n");
    }
    return 0;
}