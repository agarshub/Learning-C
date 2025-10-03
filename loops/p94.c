/*Write a program to print all natural numbers upto n.*/

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}

// /t is used to give a tab space between the numbers. it is a tab escape sequence.