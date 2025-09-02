/* Write a program to perform all operations without using output variable. */

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    printf("The sum is: %d",a+b);
    
    printf("\nThe difference is: %d",a-b);
    
    printf("\nThe product is: %d",a*b);
    
    printf("\nThe division is: %f",(float)a/b);
    // note that here using (float)a and using %d is wrong.. it should be %f to get the precise output.
    
    printf("\nThe remainder is: %d",a%b);
    return 0;
}