/* Write a program to find the difference of two numbers. */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("The difference is: %d",c);
    return 0;
}