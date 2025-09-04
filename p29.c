/* give examples for both incrementation and decrementation. */

#include<stdio.h>
int main()
{
    int a = 10;
    printf("The value of a is: %d\n", a);

    printf("The value of a after pre-incrementation is: %d\n", ++a); // pre-incrementation value = 10 +1 = 11 both printed and stored
    printf("The value of a after post-incrementation is: %d\n", a++); // post-incrementation = 11 printed but stored value = 11 + 1 = 12
    printf("The value of a now is: %d\n", a); // to show the final value of a after post-incrementation
    printf("The value of a after pre-decrementation is: %d\n", --a); // pre-decrementation value = 12 - 1 = 11 both printed and stored
    printf("The value of a after post-decrementation is: %d\n", a--); // post-decrementation = 11 printed but stored value = 11 - 1 = 10
    printf("The value of a now is: %d\n", a); // to show the final value of a after post-decrementation
    return 0;
}