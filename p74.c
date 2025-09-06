/* Find biggest of three numbers. */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 no's: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("a is big\n");
    }
    else if(b>c)
    {
        printf("b is big\n");
    }
    else
    {
        printf("C is big\n");
    }
    return 0;
}