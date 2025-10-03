/* Write a program to find the sum of n odd natural numbers using mod operator.*/

#include<stdio.h>
int main()
{
    int i=1,n,sum=0,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(count<n)
    {
        if(i%2!=0)
        {
            sum+=i;  
            count++;
        }
        i++;
    }
    printf("The sum of first %d odd natural numbers is %d\n",n,sum);
    return 0;
}