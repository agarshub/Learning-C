/* Write a program to convert the string into uppercase. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40];
    printf("Enter the string: ");
    gets(x);

    printf("The given string is: ");
    puts(x);

    strupr(x);
    printf("The string in upper case");
    
    return 0;
}