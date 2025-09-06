/* write a program to read a char and find whether it is space. */

#include<stdio.h>
int main()
{
    char x;
    printf("Enter the char: ");
    x=getchar();

    if(x==' ')
    {
        printf("Space\n");
    }
}