/* Write a program to insert an element in the array.. */

#include<stdio.h>
int main()
{
    int a[10], n, i, pos;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("Enter the position where you want to insert the element (0 to %d): ", n);
    scanf("%d", &pos);

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    printf("Enter the value to be inserted at position %d: ", pos);
    scanf("%d", &a[pos]);

    n++; // increase the size of the array

    printf("The array after insertion is: \n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}