/* Write a program to find whether the integer is even or ordd using bitwise operator. */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    (n-(n>>1)*2==0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}

/* 
n>>1 gives half of the value 

but in c for ann integer ..if we consider the bits 

5    - 0101
5>>1 - 0010  ->  2 

5/2= 2.5 but when datatype is int it ignores .5 so it becomes 2...
2*2 again gives 4 but not 5.. so it is an odd number..


similarly 
4/2=2 
2*2 = 4 so its int..

*/