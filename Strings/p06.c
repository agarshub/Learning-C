/* write a program to set a string.. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],ch;
    printf("Enter the string: ");
    gets(x);

    printf("The given string is %s",x);

    printf("\nEnter the char to be set: ");
    ch = getchar();
    strset(x,ch);

    printf("\nThe given string is %s\n",x);

    return 0;
}