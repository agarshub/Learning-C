/* write a program to print armstrong numbers with in range*/

#include <stdio.h>
int main()
{
    int n1,n2,dup,r,sum;
    printf("Enter the range: ");
    scanf("%d%d",&n1,&n2);

    printf("The armstrong numbers from %d to %d are:\n",n1,n2);

    while(n1<=n2)
    {
        dup=n1;
        sum=0;
        while(dup>0)
        {
            r = dup % 10;
            sum = sum + (r*r*r);
            dup = dup / 10;
        }

        if(sum==n1)
        {
            printf("%d\n",n1);
        }
        n1++;
    }
    return 0;
}