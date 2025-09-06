/*
Write a program to find the relation between two no's
*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two int values: \n");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("First number is big\n");
    }
    else if(b>a)
    {
        printf("Second is big\n");
    }
    else
    {
        printf("Both are equal\n");
    }
    return 0;
}