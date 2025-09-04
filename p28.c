/* Give an example for post decremntation. */

#include<stdio.h>
int main()
{
    int a = 10;
    int b;
    b = a--; // Here post-decrementation is done. First the value of 'a' is assigned to 'b' and then 'a' is decremented by 1.
    // So the value of 'b' becomes 10 and then the value of 'a' becomes 9. Hence 'a' will have the value 9 and 'b' will have the value 10.
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    return 0;
}

// here first the value of a which is 10 is assigned to b and then a is decremented by 1.
// Hence the value of b is 10 and the value of a is 9 after the operation.