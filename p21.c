/* Write a C program to find the simple interest. */

#include<stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("Enter the principal amount, time (in years) and rate of interest(%): ");
    scanf("%d%d%f",&p,&t,&r);
    si = (p * t * r) / 100; // simple interest formula
    printf("The simple interest is: %.2f",si);
    return 0;
}

// note that the .2 in %.2f is used to print only two digits after the decimal point.
// simple interest = (P * T * R) / 100
// P = principal amount
// T = time in years
// R = rate of interest
// si = simple interest