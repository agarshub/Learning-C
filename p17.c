/* Write a prrogram t0 find the circumference of the circle. */

#include<stdio.h>
#define Circumference(r) 2*3.14*r // defining a constant value Circumference using #define preprocessor directive.
int main()
{
    int r;
    float circum;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    circum = Circumference(r);  // note that we need not use the same variable r here as in the #define directive. we can use any variable name.
    printf("The circumference of the circle is: %f",circum);
    return 0;
}

/*
Here it so happens that Circumference(r) in the code (line 11) will be replaced by 2*3.14*r by the preprocessor before compilation.
Also note that it wont be calculated directly in the definition section.. First it gets replace and only then while the particular line no 11 is interpreted it gets calculated.
Circumference of circle = 2 * pi * r
radius      circum
    100       200
    -----   ---------
    10     2 * 3.14 * 10 = 62.8
*/