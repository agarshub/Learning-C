/* Write a program to find the sum of first and last and middle values in the array..*/

#include<stdio.h>
int main()
{
    int i, a[10], n;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    
    printf("Sum of first, last and middle values: %d\n", a[0] + a[n-1] + a[n/2]);
    
    return 0;
}