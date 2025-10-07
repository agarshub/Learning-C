/* Write a program to find the min and second min of given array.. */

#include<stdio.h>
int main()
{
    int a[10], n, i, min=9999, smin=9999;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] < smin && a[i] > min)
        {
            smin = a[i];
        }
    }

    printf("The first and second min value is %d and %d\n", min, smin);

    return 0;
}