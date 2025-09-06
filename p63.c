/* Write a program to read marks and find whether student passed. */

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);

    if (marks >= 35)
    {
        printf("PASSED\n");
    }
    return 0;
}