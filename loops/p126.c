/*
write a program to read a number and out the value of the number in the series
1+x-x^2+x^3-x^4+...+x^n
*/

#include <stdio.h>
int main()
{
    int x,n,i,term=1,sum=1;
    printf("Enter the value of x and n: ");
    scanf("%d%d",&x,&n);

    for(i=1; i<=n; i++)
    {
        term=term*x;
        sum=sum+term;
        term=term*(-1);
    }
    printf("The sum of the series is: %d",sum);
    return 0;
}

/*
for example the value of x=2 and n=5
the series will be 1+2-4+8-16+32=23
logic:

here sum is initialized with 1 and term is initialized with 1
because the first term of the series is 1
then in the loop term is multiplied with x and added to sum
then term is multiplied with -1 to change its sign for the next iteration

iternation 1
    term = 1*2 = 2
    sum = 1+2 = 3
    term= 2*(-1) = -2

iternation 2
    term = -2*2 = -4
    sum = 3-4 = -1
    term= -4*(-1) = 4

iternation 3
    term = 4*2 = 8
    sum = -1+8 = 7
    term= 8*(-1) = -8

iternation 4
    term = -8*2 = -16
    sum = 7-16 = -9
    term= -16*(-1) = 16

iternation 5
    term = 16*2 = 32
    sum = -9+32 = 23
    term= 32*(-1) = -32

final sum = 23
*/