/* Write a program to read the age of a person and check whether the persoin belongs to which one of the following category. */
/*
age     category
1-12    child
13-19   Teenage
20-30   Young Age
31-45   Middle Age
>45     Old Age
*/

#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age of the person: ");
    scanf("%d",&age);

    if(age>=1  && age<=12)
    {
        printf("Child\n");
    }
    else if(age>=13 && age<=19)
    {
        printf("Teenage\n");
    }
    else if(age>=20 && age<=30)
    {
        printf("Young Age\n");
    }
    else if(age>=31 && age<=45)
    {
        printf("Middle Age\n");
    }
    else if(age >45)
    {
        printf("Old Age");
    }
    return 0;
}