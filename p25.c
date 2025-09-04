/* Give ann example for pre incrementation. */

#include<stdio.h>
int main()
{
    int a = 10;
    int b;
    b = ++a; // Here pre-incrementation is done. First the value of 'a' is incremented by 1 and then assigned to 'b'.
    // So the value of 'a' becomes 11 and then assigned to 'b'. Hence both 'a' and 'b' will have the value 11.
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}