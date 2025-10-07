/* Write a program to find how many number of times an element is available in the array.. */

#include<stdio.h>
int main()
{
    int a[10], n, i, se, count = 0;
    printf("Enter the number of variables to be used: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter value of a[%d]",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the search elemenet: ");
    scanf("%d",&se);

    for(i=0;i<n;i++)
    {
        if(a[i] == se)
        {
            count++;
        }
    }

    if(count > 0)
    {
        printf("The value found %d times \n",count);
    }
    else
    {
        printf("The value not found\n");
    }
    return 0;
}