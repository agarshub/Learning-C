/* Give an example for bitwise Or (|) */

#include<stdio.h>
int main()
{
    int a = 5;  // In binary: 0101
    int b = 3;  // In binary: 0011
    int result;

    result = a | b; // Bitwise OR operation
    // 5 = 0101
    // 3 = 0011
    // In binary: 0 1 0 1 
    //            | | | |  
    //          | 0 0 1 1 
    //           ----------
    //            0 1 1 1 which is 7 in decimal
 
    printf("The result of %d | %d is: %d\n", a, b, result);
    return 0;
}