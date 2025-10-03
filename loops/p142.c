/*
write a program to print the perfect numbers within limits
*/

#include <stdio.h>
int main()
{
    int l1,l2,i,sum;
    printf("Enter the limits: ");
    scanf("%d%d",&l1,&l2);

    printf("The perfect numbers between %d and %d are:\n",l1,l2);

    while(l1<=l2)
    {
        sum=0;
        for(i=1; i<=l1/2; i++) // check for factors from 1 to l1/2
        {
            if(l1%i==0) // if l1 is divisible by i, then it is a factor
            {
                sum=sum+i; // add the factor to sum
            }
        }

        if(sum==l1) // if sum of factors is equal to the number, then it is perfect
        {
            printf("%d\n",l1);
        }
        l1++;
    }
    return 0;
}

/*
note that here we are using two loops
outer loop is for the range of numbers from l1 to l2
inner loop is for finding the factors of the number
we are checking for factors from 1 to l1/2

for example the limits are 1 to 30
the output will be
The perfect numbers between 1 and 30 are:
6
28

here we are checking for factors from 1 to l1/2
for example if l1=28, then the factors are 1,2,4,7,14
the factors greater than 14 are 28 only
so we can check for factors only up to l1/2
if the sum of factors is equal to the number, then it is perfect

for example if l1=28
the factors are 1,2,4,7,14
sum = 1+2+4+7+14 = 28
sum = 28
so 28 is a perfect number

for example if l1=6
the factors are 1,2,3
sum = 1+2+3 = 6
sum = 6
so 6 is a perfect number

for example if l1=12
the factors are 1,2,3,4,6
sum = 1+2+3+4+6 = 16
sum = 16
so 12 is not a perfect number
*/