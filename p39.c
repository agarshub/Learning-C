/* Write a program to read two numbers & check whether first is big or not. */

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    (a > b) ? printf("%d is greater than %d\n", a, b) : printf("%d is not greater than %d\n", a, b);
    return 0;
}