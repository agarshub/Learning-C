/* Write a program to read two integers and find the relation between them. */

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    (a>b) ? printf("a is greater than b.\n") : (b>a) ? printf("a is less than b.\n") : printf("a is equal to b.\n");
  
    return 0;
}