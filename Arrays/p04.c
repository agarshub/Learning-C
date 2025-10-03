/* Write a program to find the sum of all the values and sum of all even vaues and sum of all odd values in the array..*/

#include<stdio.h>
int main()
{
    int i, a[10], n, sum=0, sume=0, sumo=0;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum += a[i]; // sum of all values

        if(a[i] % 2 == 0)
        {
            sume += a[i]; // sum of even values
        }
        else
        {
            sumo += a[i]; // sum of odd values
        }
    }

    printf("Sum of all values: %d\n", sum);
    printf("Sum of even values: %d\n", sume);
    printf("Sum of odd values: %d\n", sumo);
    
    return 0;
}