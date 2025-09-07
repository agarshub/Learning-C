/* Write a program to read a digit (0-9) and print it. */

#include<stdio.h>
int main()
{
    int digit;
    printf("Enter the digit: ");
    scanf("%d",&digit);

    if(digit==1)
    {
        printf("One");
    }
    else if(digit==2)
    {
        printf("Two\n");
    }
    else if(digit==3)
    {
        printf("Three\n");
    }
    else if(digit==4)
    {
        printf("Four");
    }
    else if(digit==5)
    {
        printf("Five");
    }
    else if(digit==6)
    {
        printf("Six");
    }
    else if(digit==7)
    {
        printf("Seven");
    }
    else if(digit==8)
    {
        printf("Eight");
    }
    else if(digit==9)
    {
        printf("Nine");
    }
    else if(digit==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Invalid Digit\n");
    }
    return 0;
}