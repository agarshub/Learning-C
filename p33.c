/* Give an example for shift right operator. */

#include<stdio.h>
int main()
{
    int n = 20;  // In binary: 0001 0100
    int result;

    result = n >> 1; // Shift right by 1 position
    // 20 = 0001 0100
    // In binary: 0 0 0 1 0 1 0 0 
    //            >> 1  
    //           ----------
    //            0 0 0 0 1 0 1 0 which is 10 in decimal
 
    printf("The result of %d >> 1 is: %d\n", n, result);
    return 0;
}
/*
Generally in coding for 1 Byte we have 8 bits
so 20 in binary is 0001 0100
when we shift right by 1 position it becomes 0000 1010 which is 10 in decimal.
    0 0 0 1 0 1 0 0
      0 0 0 0 1 0 1 0

      All the bits are shifted to right by 1 position and a 0 is added at the leftmost position.

      n >> 1 means n / 2^1 = n / 2 = 20 / 2 = 10
      simillarly, n >> 2 means n / 2^2 = n / 4 = 20 / 4 = 5
        n >> 3 means n / 2^3 = n / 8 = 20 / 8 = 2
        n >> 4 means n / 2^4 = n / 16 = 20 / 16 = 1
*/