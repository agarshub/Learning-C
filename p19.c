/* Write a program to psolve res = b^2-4*a*c. */

#include<stdio.h>
#define res(a,b,c) (b*b)-(4*a*c);    // note that here we are using parentheses to avoid any operator precedence issues. and it is advisable to use parentheses in such cases.
int main()
{
    int a,b,c;
    printf("Enter the values of a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    int result = res(a,b,c)
    printf("The result is: %d",result);
    return 0;
}

/* 
To understand the concept of define better.. consider the following example:
a=3,b=10,c=4
Now, here in this code first the when the code takes three inputs a,b and c.. it stores them in the respective memory locations.
Then when it comes to the line int result = res(a,b,c) , the preprocessor replaces res(a,b,c) with (b*b)-(4*a*c) , so the line becomes:
so line 11 becomes:
int result = (b*b)-(4*a*c);

so then the ; which is must should not be written in the line 11 since it is already written in the #define directive.
int result = (10*10)-(4*3*4);
int result = 100 - 48;
int result = 52;
here 52 is stored in the memory location of result.
printf("The result is: %d",result);
The result is: 52
*/