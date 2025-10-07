/* Write a program to find the maximum and second maximum in the array.. */

#include<stdio.h>
int main()
{
    int a[10], n, i, max = -9999, smax = -9999;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);

        if(a[i] > max)
        {
            max = a[i];
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] > smax && a[i] < max)
        {
            smax = a[i];
        }
    }
    printf("The maximum value is %d\n", max);

    if(smax == -9999)
    {
        printf("There is no second maximum value\n");
    }
    else
    {
        printf("The second maximum value is %d\n", smax);
    }

    return 0;
}