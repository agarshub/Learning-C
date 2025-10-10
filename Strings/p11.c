/* Write a program to copy a string from another string*/

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    printf("Enter two strings:");
    printf("\nEnter string1: ");
    gets(x);
    printf("\nEnter string2: ");
    gets(y);

    strcpy(y,x);
    printf("The final strings are %s %s \n",x,y);
    
    return 0;
}

/*
here i enetered two srings..

x and y

out of which the whole content of x is copied in string y..

Input:
Helloo Worldddd
Output:
Helloo Helloo
*/