/* Write a program ot delete an element in the array */

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

    printf("Enter the position where you want to delete the element (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) // this condition is used to check whether the position is valid or not
    {
        printf("Invalid position!\n");
        return 1;
    }

    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--; // decrease the size of the array

    printf("The array after deletion is: \n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}