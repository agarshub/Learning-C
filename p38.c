/* Write a c program to read your age and check whether you are eligible to vote or not. */

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    (age >= 18) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");
    return 0;
}