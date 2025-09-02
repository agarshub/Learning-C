/* Write a program to finf the perimeter of the rectangle. */

#include<stdio.h>
int main()
{
    int l,b,peri;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d",&l,&b);
    peri = 2 * (l + b);
    printf("The perimeter of the rectangle is: %d",peri);
    return 0;
}

/*
Perimeter of a rectangle = 2 * (length + breadth)
length    breadth        perimeter
 100        20            300
------    -------   ----------------
  4        5       2 * (4 + 5) = 18
*/