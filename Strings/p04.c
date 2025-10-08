/* Write a program to convert the string into lower case.. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40];
    printf("Enter the string: ");
    gets(x);
    
    printf("The given string is ");
    puts(x);
    
    strlwr(x);
    printf("The string is lower case is %s\n",x);
    
    return 0;
}