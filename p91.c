/*
Write a program to print a message n times
*/

#include<stdio.h>
int main()
{
    int i,n;    // i is called loop variable.. or iterator
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Hello!\n");
    }
    return 0;
}

// Note that here n is the number of times we know that loop is gonna run n times so for loop is preferred.