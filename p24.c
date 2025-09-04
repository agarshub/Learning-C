/* Write a c prgram to give an example for size of operator. */

#include<stdio.h>
int main()
{
    short int a;
    int y;
    long int b;
    long long int c;
    float d;
    double e;
    long double f;
    char g;
    printf("The size of short int is: %zu bytes\n", sizeof(a));
    printf("The size of int is: %zu bytes\n", sizeof(y));
    printf("The size of long int is: %zu bytes\n", sizeof(b));
    printf("The size of long long int is: %zu bytes\n", sizeof(c));
    printf("The size of float is: %zu bytes\n", sizeof(d));
    printf("The size of double is: %zu bytes\n", sizeof(e));
    printf("The size of long double is: %zu bytes\n", sizeof(f));
    printf("The size of char is: %zu bytes\n", sizeof(g));
    return 0;
}

// Note that here already declared variables are used to find the size of the data types.
// we can find the size of data types directly by using sizeof(data_type) like sizeof(int), sizeof(float) etc.
// %zu is a format specifier used to print size_t type values which is the return type of sizeof operator.
// It is recommended to use %zu for printing the result of sizeof operator to avoid any warnings or errors.