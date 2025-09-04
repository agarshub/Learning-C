/* give more examples for shift left and shift right. */

#include<stdio.h>
int main()
{
    int n = 5;  // In binary: 0000 0101
    int result;

    result = n << 1; // Shift left by 1 position
    // 5 = 0101
    // In binary: 0 1 0 1 
    //            << 1  
    //           ----------
    //            1 0 1 0 which is 10 in decimal
 
    printf("The result of %d << 1 is: %d\n", n, result);

    result = n << 2; // Shift left by 2 positions
    // 5 = 0101
    // In binary: 0 1 0 1 
    //            << 2  
    //           ----------
    //          1 0 1 0 0 which is 20 in decimal
 
    printf("The result of %d << 2 is: %d\n", n, result);

    result = n >> 1; // Shift right by 1 position
    // 5 = 0101
    // In binary: 0 1 0 1 
    //            >> 1  
    //           ----------
    //            0 0 1 0 which is 2 in decimal
 
    printf("The result of %d >> 1 is: %d\n", n, result);

    result = n >> 2; // Shift right by 2 positions
    // 5 = 0101
    // In binary: 0 1 0 1 
    //            >> 2  
    //           ----------
    //            0 0 0 1 which is 1 in decimal
 
    printf("The result of %d >> 2 is: %d\n", n, result);

    return 0;
}

/* 
In short we can say that to double a number n we can do n << 1
and to halve a number n we can do n >> 1.
Similarly, to multiply a number n by 4 we can do n << 2
and to divide a number n by 4 we can do n >> 2.
To multiply a number n by 8 we can do n << 3
and to divide a number n by 8 we can do n >> 3.
*/