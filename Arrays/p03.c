/* Write a program to read n values into the array and print them..*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)  // loop of n iterations from 0 to n-1
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]); // Read each element from user
    }

    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

/*
Here , we need to read n values into the array and print them

but we need not define the size of the array at compile time
we can read the size of the array from the user at runtime
this is called variable length array

so we first read the size of the array from the user
then we declare the array of that size
then we read the elements of the array from the user using a loop
then we print the elements of the array using another loop

but we need to make sure that the size of the array is a positive integer
also that the size of the array should be within the limits of the memory available

also size must be stored in an integer n
for example if , n doesnot contain an integer value
then the program may give unexpected results
*/