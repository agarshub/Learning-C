/* Write a program to print the min value of a number.. */

#include<stdio.h>
int main()
{
    int i, a[10], n, min;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    min = a[0]; // Assume first element is the minimum

    for(i = 1; i < n; i++) // Start from second element
    {
        if(a[i] < min) // Compare with current minimum
        {
            min = a[i]; // Update minimum if current element is smaller
        }
    }

    printf("Minimum value in the array: %d\n", min);
    
    return 0;
}