/* Write a C program to find the area of the circle. */

#include<stdio.h>
#define pi 3.14 // defining a constant value pi using #define preprocessor directive.
int main()
{
    int r;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    area = pi * r * r;  // note that here we need not write (float)pi as pi is already defined as float value. and any one of the variables in the expression should be float to get the precise output
    printf("The area of the circle is: %f",area);
    return 0;
}

