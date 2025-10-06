/* Write a program to find the max value in the array.. */

#include<stdio.h>
int main()
{
    int i, a[10], n, max,pos;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];
    pos = 0;
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }
    printf("The maximum value is %d at index %d and position %d\n", max, pos, pos + 1);

    return 0;
}

/* 
note that here pos variable is used to store the index of the maximum element
position is index + 1
 SO if the maximum element is at index 0 then its position is 1
 but value of pos variable is 0
*/