/* Write a program to read 5 values in the array and print the array*/

#include<stdio.h>
int main()
{
    int a[5]; // Declare an array of size 5

    for(int i = 0; i < 5; i++)  // loop of 5 iterations from 0 to 4
    {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

/*
here we need not initialize the array alwayy
we can also read the values from the user using scanf statement using a loop
*/