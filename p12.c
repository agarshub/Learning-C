/* To find the area of the square. */

#include<stdio.h>
int main()
{
    int side,area;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    area = side * side;
    printf("The area of the square is: %d",area);
    return 0;
}
/*
Area of square = side * side
side        area
100         200
-----      ---------
 4           4 * 4 = 16
*/