/* Write a program to read the marks and print pass or fail. */

#include<stdio.h>
int main()
{
    printf("Enter the marks: ");
    int marks;
    scanf("%d", &marks);
    (marks >= 33) ? printf("You have passed the exam.\n") : printf("You have failed the exam.\n");
    return 0;
}