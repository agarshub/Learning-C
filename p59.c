/* Write a proogram to find the relation between three variables or biggest of three variables. */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    ((a>b) && (a>c)) ? printf("a is greastest.\n") : (b>c) ? printf("b is greatest.\n") : printf("c is greatest.\n");
    return 0;
}

/*
Note that this is not the best optimised code for this problem.
because it will fail in three test cases.

Test case 1:
if a=b=c
Output: c is greatest.

Test case 2:
if a=b
Output: c is greatest.

Test case 3:
if b=c
Output: a is greatest.

There might be more test cases that may not satisfy this code.

for this code to be correct we need to keep a constraint while entering the input that no two numbers should be equal.
*/