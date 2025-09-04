/* without using output variable do shift left and shift right. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The double of the value n is %d \n", n << 1); // n * 2^1 = n * 2
    printf("The half of the value n is %d \n", n >> 1); // n / 2^1 = n / 2
    printf("The value of n multiplied by 4 is %d \n", n << 2); // 2^2 = 4
    printf("The value of n divided by 4 is %d\n ", n >> 2); // 2^2 = 4
    printf("The value of n multiplied by 8 is %d \n", n << 3); //2^3 = 8
    printf("The value of n divided by 8 is %d \n", n >> 3); //2^3 = 8
    return 0;
}

/*
Write this program with different input values to see how it works.
it works differently for odd and even numbers.
*/