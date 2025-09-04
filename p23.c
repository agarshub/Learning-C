/* Write a C program to give the example for sizeof Operator. */

#include<stdio.h>
int main()
{
    printf(" The size of int data type is: %zu bytes\n", sizeof(int));       // Here %zu is a format specifier used to print size_t type values.
    printf(" The size of float data type is: %zu bytes\n", sizeof(float));
    printf(" The size of char data type is: %zu bytes\n", sizeof(char));
    printf(" The size of double data type is: %zu bytes\n", sizeof(double));
    printf(" The size of long int data type is: %zu bytes\n", sizeof(long int));
    printf(" The size of long double data type is: %zu bytes\n", sizeof(long double));
    printf(" The size of short int data type is: %zu bytes\n", sizeof(short int));
    printf(" The size of long long int data type is: %zu bytes\n", sizeof(long long int));
    return 0;
}