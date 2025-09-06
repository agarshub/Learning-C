/* Write a program to read the original , sold amounts and check whether the person got profit or loss. */

#include<stdio.h>
int main()
{
    int  oa,sa;
    printf("Enter the original and sold amounts");
    scanf("%d %d",&oa,&sa);

    if(sa>oa)
    {
        printf("profit\n");
    }
    else if(oa>sa)
    {
        printf("Loss\n");
    }
    else
    {
        printf("No profit No loss\n");
    }
    return 0;
}