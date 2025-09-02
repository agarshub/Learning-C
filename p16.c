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

/*
Area of circle = pi * r * r
radius      area
 100       200
 -----   ---------
  10     3.14 * 10 * 10 = 314
*/

// Note that when we write #define pi 3.14 , every occurrence of pi in the code will be replaced by 3.14 by the preprocessor before compilation.
// and also this is not any particular data type. it is just a symbolic constant.
// simply think of pi as a value 3.14 which is replaced while calculated when we use pi in the code.
// we use this to avoid magic numbers in the code. and also to make the code more readable.
// another use case is.. to instead of writing large number multiple times in tghe code.. we can define it once and use it multiple times.
// example: #define MAX 1000
// then we can use MAX in the code instead of writing 1000 multiple times.