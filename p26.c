/* Give an example for post incrementation. */

#include<stdio.h>
int main()
{
    int a = 10;
    int b;
    b = a++; // Here post-incrementation is done. First the value of 'a' is assigned to 'b' and then 'a' is incremented by 1.
    // So the value of 'b' becomes 10 and then the value of 'a' becomes 11. Hence 'a' will have the value 11 and 'b' will have the value 10.
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}

// Note that in post incrementation, the current value is used in the expression first and then it is incremented in the next step.
// Hence the value of 'b' is 10 and the value of 'a' is 11 after the operation.