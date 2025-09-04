/* Give an example for bitwise and (&). */

#include<stdio.h>
int main()
{
    int a = 5;  // In binary: 0101
    int b = 3;  // In binary: 0011
    int result;

    result = a & b; // Bitwise AND operation
    // 5 = 0101
    // 3 = 0011
    // In binary: 0 1 0 1 
    //            & & & &  
    //          & 0 0 1 1 
    //           ----------
    //            0 0 0 1 which is 1 in decimal
 
    printf("The result of %d & %d is: %d\n", a, b, result);
    return 0;
}