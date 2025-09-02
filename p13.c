/* Write a program to find the area of the rectangle. */

#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d",&l,&b);
    area = l * b;
    printf("The area of the rectangle is: %d",area);
    return 0;
}
/*
Area of a rectangle = length * breadth
length  breadth     area
 100      200       300
-----    -------   ---------
  4        5       4 * 5 = 20
*/