/*
write a program to read a number and out the value of the number in the series
1-x+x^2-x^3+x^4-...+x^n
*/

#include <stdio.h>
int main()
{
    int x,n,i,term=1,sum=1;
    printf("Enter the value of x and n: ");
    scanf("%d%d",&x,&n);

    for(i=1; i<=n; i++)
    {
        term=term*(-x);
        sum=sum+term;
    }
    printf("The sum of the series is: %d",sum);
    return 0;
}

/*
logic:

for example the value of x=2 and n=5
the series will be 1-2+4-8+16-32=-21
here sum is initialized with 1 and term is initialized with 1
because the first term of the series is 1
then in the loop term is multiplied with -x and added to sum

iternation 1
    term = 1*(-2) = -2
    sum = 1-2 = -1

iternation 2
    term = -2*(-2) = 4
    sum = -1+4 = 3

iternation 3
    term = 4*(-2) = -8
    sum = 3-8 = -5
iternation 4
    term = -8*(-2) = 16
    sum = -5+16 = 11
iternation 5
    term = 16*(-2) = -32
    sum = 11-32 = -21

final sum = -21
*/