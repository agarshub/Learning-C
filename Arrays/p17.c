/*
LINEAR SEARCH IN AN ARRAY

WHEN elements in an array are unordered the search is carried out by
checking each element in the array one by one until the desired element is found
*/

/* write a program to find the given element in an array.. */

#include<stdio.h>
int main()
{
    int a[10], n, i, flag = 0,se; // se is the search element

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
            flag = 1;
            break; // break the loop if element is found
        }
    }

    if(flag == 1)
    {
        printf("Element %d is found at index %d and position %d\n", se, i, i + 1);
    }
    else
    {
        printf("Element %d is not found in the array\n", se);
    }

    return 0;
}