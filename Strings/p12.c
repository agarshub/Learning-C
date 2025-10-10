/* Write a program to copy n letters of a string.. */

#include<stdio.h>
#include<string.h>

int main()
{
    char x[40],y[40];
    int n;
    printf("\nEnter string1: ");
    gets(x);
    printf("\nEnter string2: ");
    gets(y);
    printf("\nEnter the number of chars to be copied: ");
    scanf("%d",&n);

    strncpy(y,x,n);

    printf("The final strings are %s %s \n",x,y);
    
    return 0;
}

/* 
when x and y are two inputs

strncpy(y,x,n) copies n letters of string x into string y.. but 

note that here since only n letters are copied and '\0' might not be copied so that strncpy 

note that here if string if x contains 4 chars (excluding '\0') then if number of stirngs to be copied is 5 then string1 and sstrign2 would be same..
irrespective of what there might be in string 2

*/