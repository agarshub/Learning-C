/* Write a program to find the division of two numbers. */

#include<stdio.h>
int main()
{
    int a,b;
    float c;
    int d;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=(float)a/b;  // Type casting is done to get the precise value of division.
    printf("The division is: %f",c);
    d=a/b;  // This will give the quotient value of the division.
    printf("\nThe quotient is: %d",d);
    return 0;
}

/*
here float(a) is used to conver integer value to float value.
This is known as type casting.
this is done to get the precise value of division.

because in C 
int/int = int
float/int = float
int/float = float
float/float = float

so to get a precise value we need to  get atleast one float value in the division.
 and we should store that in a float variable to get the precise value.

 if the variable is int then we might not get the desired output.
 and vice versa.
*/