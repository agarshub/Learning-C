/* Give an example for concatenation.. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    printf("Enter two strings: ");
    gets(x);
    gets(y);

    printf("The given strings %s %s \n",x,y);
    strcat(x,y);

    printf("The final strings are x = %s y = %s\n",x,y);

    return 0;
}

/*
concatenation is a part where 
x = Hello
y = World

strcat(x,y) concatenates string y after x..
output:
x= HelloWorld
*/