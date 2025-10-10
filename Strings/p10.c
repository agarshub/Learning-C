/* */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    printf("Enter the string: ");
    gets(x);

    strcpy(y,x);
    printf("The final string is ");
    puts(y);
    return 0;
}

/*
here also the string prints the output.. it is copied till the end..

*/