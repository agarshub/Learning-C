/* Write a program to initialize and print an array. */

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50}; // Initialized the array
    
    for(int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i,a[i]); // Print each element
    }
    return 0;
}

/*
here let us assume the address of a is 100

then the use of array is that it stores the elements in contiguous memory locations

So the address of a[0] is 100
the address of a[1] is 104
the address of a[2] is 108
the address of a[3] is 112
the address of a[4] is 116

now why there is a difference of 4 in the addresses
because the size of int is 4 bytes
so one int takes 4 bytes of memory

                    a
    100     200     300     400      500
    -------------------------------------
    10      20      30      40       50

    the index 0 is at address 100
    the index 1 is at address 104
    the index 2 is at address 108
    the index 3 is at address 112
    the index 4 is at address 116

*/