/* Write a program to print even natural numbers.*/

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}

// this checks if the number is even or not. if it is even then it prints the number otherwise it skips the number.
// % is called modulus operator. it gives the remainder when we divide two numbers.
// if the remainder is 0 then the number is even otherwise it is odd.