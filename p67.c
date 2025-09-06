/* Write a program to find absolute value of the given integer. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the n value : ");
    scanf("%d",&n);
    
    if(n<=0)
    {
        printf("Absolute Value is %d\n",n*(-1));
    }
    else
    {
        printf("Absolute value is %d\n",n);
    }
    return 0;
}