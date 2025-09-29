/* Write a program to print odd natural numbers up to n*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}