/* Write a program to find the sum of n even, odd, and all natural numbers.*/

#include<stdio.h>
int main()
{
    int n,i=1,sum=0,sume=0,sumo=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;   // sum of all natural numbers
        if(i%2==0)
        {
            sume+=i;  // sum of even natural numbers
        }
        else
        {
            sumo+=i;  // sum of odd natural numbers
        }
        i++;
    }
    printf("The sum of all natural numbers up to %d is %d\n",n,sum);
    printf("The sum of even natural numbers up to %d is %d\n",n,sume);
    printf("The sum of odd natural numbers up to %d is %d\n",n,sumo);
    return 0;
}