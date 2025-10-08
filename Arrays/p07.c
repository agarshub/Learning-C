/* write a program to print the array in reverse order.. */

#include<stdio.h>
int main()
{
    int i, a[10], n;

    printf("Enter the number of elements in the array (max 10): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("The array in original order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");


    printf("Array in reverse order: ");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}

/*
example:
Enter the number of elements in the array (max 10): 5
Enter value for a[0]: 10
Enter value for a[1]: 20
Enter value for a[2]: 30
Enter value for a[3]: 40
Enter value for a[4]: 50

The array in original order: 10 20 30 40 50
Array in reverse order: 50 40 30 20 10

logic:
we are using a for loop to print the array in reverse order
for(i = n - 1; i >= 0; i--)
{
    printf("%d ", a[i]);
}

n-1 is the index of the last element in the array
i >= 0 is the condition to stop the loop when i becomes less than 0
here starting from 4 to 0 we printing a[4], then a[3], then a[2], then a[1], then a[0]..
*/

// note that printing the array in reverse order does not change the original array
// if you want to change the original array then you have to reverse the array using swapping logic which p08.c
// here we are just printing the array in reverse order without changing the original array
// so the original array remains the same