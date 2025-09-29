/* Write a program to find the sum of even natural numbers using modulus operator.*/

#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;  
        }
        i++;
    }
    printf("The sum of even natural numbers up to %d is %d\n",n,sum);
    return 0;
}