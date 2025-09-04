/* Write a program to rad the original , sold amount and check whether the person got profit or loss. */

#include<stdio.h>
int main()
{
    int original, sold, result;
    printf("Enter the original amount and sold amount: ");
    scanf("%d %d", &original, &sold);
    result = sold - original;
    (result > 0) ? printf("You got a profit of %d\n", result) : (result < 0) ? printf("You got a loss of %d\n", -result) : printf("No profit no loss.\n");
    return 0;
}