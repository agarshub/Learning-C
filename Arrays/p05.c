/* Write a program to fund the sum of all values , even values and odd values in the array.. 
using one for loop only
*/

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

/*

here inside scanf loop itself we are calculating the sum of all values , sum of even values and sum of odd values
so we are using only one loop..
thus we are optimizing the code
*/