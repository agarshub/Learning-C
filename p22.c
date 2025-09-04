/* Write a C program for example of an assignment operator */

#include<stdio.h>
int main()
{
    int a = 10; // Here '=' is an assignment operator that assigns the value 10 to the variable 'a'.
    // This is known as Declarativee assignment.
    printf("The value of a is: %d\n", a);

    a = 30; // Here the value of 'a' is updated to 30 using the assignment operator '='.
    // This is known as Re-assignement/Normal assignment to an already initialized variable.
    printf("The value of a is: %d\n", a);

    a+= 20; // Here the value of 'a' is updated to 50 using the assignment operator '+='.
    // This is known as Compound assignment/Arithmetic assignment.
    printf("The value of a is: %d\n", a);
    return 0;
}