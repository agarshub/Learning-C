/* Write a program to find length of the string.. */

#include<stdio.h>
#include<string.h>
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

/* 
strlen is a built in function used like printf and scanf..
this function is in a library string.h
*/