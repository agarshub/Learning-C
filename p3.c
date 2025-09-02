/* Write a program to read an integer and print it. */

#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x); // %d is the format specifier for integer.
    printf("The given integer is : %d",x);
    return 0;
}

/* if i put inpput as 5 then it gets stored in the address 100 .. &x =100 and the value of x is 5
    x 
    100
    -----
    5
*/


// %d is used as a placeholder for integer values in the format string of printf and scanf functions.
// & is the address operator. It is used to get the address of a variable. In scanf, it is used to store the input value at the address of the variable.
