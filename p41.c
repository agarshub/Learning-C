/* write a program to read a no and find if its divisble by 7 or not. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    (n % 7 == 0) ? printf("%d is divisible by 7\n", n) : printf("%d is not divisible by 7\n", n);
    return 0;
}