/* Write a program to solve e=mc^2. */

#include<stdio.h>
#define c 3*100000000.0 // SPEED OF LIGHT in m/s
int main()
{
    int m;
    printf("Enter the mass (in kg): ");
    scanf("%Ld",&m);

    double e;
    e = m * c * c; // e=mc^2
    printf("The energy is: %lf Joules",e);
    return 0;
}

/*
double is used to store large floating point numbers.
its range is from 2.3E-308 to 1.7E+308
m=100
e=100 * (3*10^8) * (3*10^8) = 9 * 10^18 = 9000000000000000000
*/