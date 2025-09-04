/* Give an example for shift left. */

#include<stdio.h>
int main()
{
    int n = 5;  // In binary: 0101
    int result;

    result = n << 1; // Shift left by 1 position
    // 5 = 0101
    // In binary: 0 1 0 1 
    //            << 1  
    //           ----------
    //            1 0 1 0 which is 10 in decimal
 
    printf("The result of %d << 1 is: %d\n", n, result);
    return 0;
}

/*
Generally in coding for 1 Byte we have 8 bits
so 5 in binary is 0000 0101
when we shift left by 1 position it becomes 0000 1010 which is 10 in decimal.
    0 0 0 0 0 1 0 1
      0 0 0 0 1 0 1 0

      All the bits are shifted to left by 1 position and a 0 is added at the rightmost position.

      n << 1 means n * 2^1 = n * 2 = 5 * 2 = 10
      simillarly, n << 2 means n * 2^2 = n * 4 = 5 * 4 = 20
        n << 3 means n * 2^3 = n * 8 = 5 * 8 = 40
        n << 4 means n * 2^4 = n * 16 = 5 * 16 = 80
*/