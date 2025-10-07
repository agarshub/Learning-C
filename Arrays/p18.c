/* write a program to find an element in an array without using flag variable.. */

#include<stdio.h>
int main()
{
    int a[10], n, i, se;
    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &se);
    for(i = 0; i < n; i++)
    {
        if(a[i] == se)
        {
            printf("Element %d is found at index %d and position %d\n", se, i, i + 1);
            break;
        }
    }

    if(i==n)
    {
        printf("Element %d is not found in the array\n", se);
    }
    
    return 0;
}