/* Write a program to find the sum of all natural numbers up to n*/

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;   // sum+=i; can be used as well ,.. this is called shorthand operator
    }
    printf("The sum of all natural numbers up to %d is %d\n",n,sum);
    return 0;
}

// note that we should initalize the sum variable to 0 otherwise it will contain garbage value and the result will be incorrect.
// here we are using for loop because we know the number of iterations in advance. the loop will run n times.
// if we do not know the number of iterations in advance then we can use while loop or do while loop.