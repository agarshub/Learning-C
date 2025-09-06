/* Write a program to read a character and check whether it is capiutal or smnall or digit or space or entrer key or special char. */

#include<stdio.h>
int main()
{
    char x;
    printf("Enter the char:\n");
    x=getchar();

    if((x>=65)&&(x<=90))
    {
        printf("Capital\n");
    }
    else if((x>=97)&&(x<=122))
    {
        printf("Small\n");
    }
    else if((x>=48)&&(x<=57))
    {
        printf("Digit.");
    }
    else if(x==32)
    {
        printf("Space bar\n");
    }
    else if(x==10)
    {
        printf("Enter Key\n");
    }
    else
    {
        printf("Special Character\n");
    }
    return 0;
}