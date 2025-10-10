/* Write a program to */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    int n,res;

    printf("Enter two strings: ");
    gets(x);
    gets(y);

    res = strcmp(x,y);
    if(res > 0)
    {
        printf("First string is big");
    }
    else if(res < 0)
    {
        printf("Second string is big");
    }
    else
    {
        printf("Both are same");
    }
    
    return 0;
}

/*
note that 
ascii values of a-z is 97-122

A-Z is 65 - 90

strcmp compares the ascii values

it does as following

strcmp(x,y)
ascii value of x - ascii value of y
so hence we have the result as big..
*/