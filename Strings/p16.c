/* Write a program */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    int n,res;

    printf("Enter two strings: ");
    gets(x);
    gets(y);

    printf("Enter the no of char to be compared: ");
    res = strncmp(x,y,n);
    if(res>0)
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