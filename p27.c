/* Give an example for pre decremntation. */

#include<stdio.h>
int main()
{
    int a = 10;
    int b;
    b = --a; // Here pre-decrementation is done. First the value of 'a' is decremented by 1 and then assigned to 'b'.
    // So the value of 'a' becomes 9 and then assigned to 'b'. Hence both 'a' and 'b' will have the value 9.
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}