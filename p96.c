/* Write a program to print even natural numbers.*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}

// another way to do the same thing using for loop. here we are incrementing the value of i by 2 in each iteration.
// in this way the loop will run n/2 times if n is even and (n-1)/2 times if n is odd.
// hence this is more efficient than the previous method.
// because less number of iterations means less time taken to execute the program.
// here we are starting the loop variable i from 2 because 2 is the first even natural number.
// we can also start the loop variable i from 0 if we want to include 0 as a natural number.