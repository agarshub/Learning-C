/* Write a program to duplicate a string.. */

#include<stdio.h>

int main()
{
    char x[40];
    printf("Enter the string: ");
    gets(x);

    printf("The given string is %s",x);
    printf("The duplicate is %s",strdup(x));
    
    return 0;
}