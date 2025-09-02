/* Write a Cprogram to perform all arithmetic operatiuons by using one ouput variable. */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    c=a+b;
    printf("The sum is: %d",c);
    
    c=a-b;
    printf("\nThe difference is: %d",c);
    
    c=a*b;
    printf("\nThe product is: %d",c);
    
    c=a/b;
    printf("\nThe division is: %d",c);
    // note that here using (float)a and storing in int c will not give the desired output.
    // or using %f and printing c which is int type will also not give the desired output.
    
    c=a%b;
    printf("\nThe remainder is: %d",c);
    return 0;
}