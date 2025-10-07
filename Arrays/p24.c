/* Write a program to find length of the string.. */

#include<stdio.h>
int main()
{
    char x[40];
    int l;
    printf("Enter the string: ");
    gets(x);

    printf("The given string is ");
    puts(x);
    
    l=strlen(x);
    printf("The no of char in a string is %d\n",l);
    
    return 0;
}