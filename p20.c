/* Write a program to solve a^2+b^2+2*a*b. */

#include<stdio.h>
#define expr(x,y) (x*x)+(y*y)+(2*x*y)
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    int result = expr(a,b);
    printf("The result is: %d",result);
    return 0;
}