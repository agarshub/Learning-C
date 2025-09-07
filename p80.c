/*
Write a program to read three subject marks and find the total and average.
Based on average find in which class the student is based.
*/

#include<stdio.h>
int main()
{
    int m1,m2,m3;
    printf("Enter the marks of three subjects: ");
    scanf("%d %d %d",&m1,&m2,&m3);

    int total = m1+m2+m3;
    printf("The total of three subjects is : %d",total);

    float average;
    average=total/3.0;  // here instead of average=(float)total/3; if there is a number in the expression we convert it float by adding .0 so it is int/float = float value.
    printf("The average of the three subject marks of a student is : %f",average);

    if(average>=35 && average <50)
    {
        printf("Third Class\n");
    }
    else if(average >=50 && average < 60)
    {
        printf("Second Class\n");
    }
    else if(average >=60)
    {
        printf("First Class\n");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}