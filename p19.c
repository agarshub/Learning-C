/* Write a program to psolve res = b^2-4*a*c. */

#include<stdio.h>
#define res(a,b,c) (b*b)-(4*a*c)    // note that here we are using parentheses to avoid any operator precedence issues. and it is advisable to use parentheses in such cases.
int main()
{
    int a,b,c;
    printf("Enter the values of a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    int result = res(a,b,c);
    printf("The result is: %d",result);
    return 0;
}