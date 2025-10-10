/* Write a program to give an example for concatenation.. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    int n;
    printf("Enter two strings: ");
    gets(x);
    gets(y);
    printf("The given strings are %s %s\n",x,y);

    printf("Enter the no of char to be concatenated: ");
    scanf("%d",&n);

    strncat(x,y,n);

    printf("The final strings are x = %s y = %s\n",x,y);

    return 0;
}

/*
strncat(x,y,n) concatenates n chars of string y after string x..

Hello
World
3

Output: HelloWor World

wor is concatenated after Hello..
*/