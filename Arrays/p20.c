/* write a program to read char array and print it.. */

#include<stdio.h>
int main()
{
    char x[10];
    int n,i;
    
    printf("Enter the no of chars to be used: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the char: ");
        scanf("%c",&x[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%c",x[i]);
    }
    
    return 0;
}