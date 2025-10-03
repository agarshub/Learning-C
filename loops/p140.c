/*
Write a program to print the prime number between the limits
*/

#include <stdio.h>
int main()
{
    int n1,n2,i,j,flag;
    printf("Enter the range: ");
    scanf("%d%d",&n1,&n2);

    printf("The prime numbers from %d to %d are:\n",n1,n2);

    for(i=n1; i<=n2; i++)
    {
        if(i<=1)
            continue; // skip 0 and 1 as they are not prime numbers
        flag=1; // assume i is prime
        for(j=2; j*j<=i; j++) // check for factors from 2 to sqrt(i)
        {
            if(i%j==0) // if i is divisible by j, then it is not prime
            {
                flag=0; // set flag to 0
                break; // no need to check further
            }
        }
        if(flag==1) // if flag is still 1, then i is prime
            printf("%d\n",i);
    }

    return 0;
}

/*
This is another method by the help of flag
flag is used to keep track of whether the number is prime or not
if flag is 1, then the number is prime
if flag is 0, then the number is not prime

logic:
for example the limits are 10 and 20
the output will be
The prime numbers between 10 and 20 are:
11
13
17
19

here we are using two for loops
outer loop is for the range of numbers from n1 to n2
inner loop is for finding the factors of the number
for each number in the range, we are checking how many factors it has
if the count of factors is 2, then it is prime
we are checking for factors from 2 to sqrt(i)
because any factor greater than sqrt(i) will have a corresponding factor less than sqrt(i)

for example if i=36, then the factors are 1,2,3,4,6,9,12,18,36
the factors greater than sqrt(36)=6 are 9,12,18,36
so we can check for factors only up to sqrt(i)
if the flag is still 1 after the inner loop, then i is prime
*/