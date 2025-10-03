/* write a program to raise the given number up to the given power.*/

#include <stdio.h>
int main()
{
    int base,exp,i=1,res=1;
    printf("Enter the base number: ");
    scanf("%d",&base);
    printf("Enter the exponent number: ");
    scanf("%d",&exp);
    while(i<=exp)
    {
        res*=base; // multiply base with res and store the result in res
        i++;
    }
    printf("%d raised to the power %d is: %d\n",base,exp,res);
    return 0;
}