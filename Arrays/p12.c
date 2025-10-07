/* Write a program to find the min and second min of given array.. */

#include<stdio.h>
int main()
{
    int a[10], n, i, min = 9999, smin = 9999;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            smin = min;
            min = a[i];
        }
        else if(a[i] < smin && a[i] != min)
        {
            smin = a[i];
        }
    }
    printf("The minimum value is %d\n", min);

    if(smin == 9999)
    {
        printf("There is no second minimum value\n");
    }
    else
    {
        printf("The second minimum value is %d\n", smin);
    }

    return 0;
}