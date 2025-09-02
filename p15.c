/* Write a program to find the perimeter of the square. */

#include<stdio.h>
int main()
{
    int side,peri;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    peri = 4 * side;
    printf("The perimeter of the square is: %d",peri);
    return 0;
}

/*
perimeter of square = 4 * side
side        perimeter
100         200
-----      ---------
 4           4 * 4 = 16
*/