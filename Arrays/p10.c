/* Write a program to print the min value of a number and its position in an array.. */

#include<stdio.h>
int main()
{
    int i, a[10], n, min, pos;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    min = a[0]; // Assume first element is the minimum
    pos = 0; // Position of the minimum element
    for(i = 1; i < n; i++) // Start from second element
    {
        if(a[i] < min) // Compare with current minimum
        {
            min = a[i]; // Update minimum if current element is smaller
            pos = i; // Update position of the minimum element
        }
    }

    printf("The minimum value is %d at index %d and position %d\n", min, pos, pos + 1);
    
    return 0;
}

/*
note that position is index + 1

because
index starts from 0
position starts from 1

in an array of size 5
index:    0   1   2   3   4
position: 1   2   3   4   5

so 1st element is at index 0.. so position = index + 1
*/