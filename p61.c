/* Write a program to read a value and find whether it is positive. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("Positive Value");
    }
    return 0;
}

/* This is simple if statement 

Syntax:
if(condition)
{
}

note that when it is single stament inside {} we donot require them but it is always advisable to keep them to avoid confusion.

*/
