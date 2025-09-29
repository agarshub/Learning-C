/* Write a program to find the sum of even natural numbers.*/

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        sum+=i;  
    }
    printf("The sum of even natural numbers up to %d is %d\n",n,sum);
    return 0;
}