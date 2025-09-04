/* Write a program to read the marks in three subjects and check the result (pass/fail). */

#include<stdio.h>
int main()
{
    int m1, m2, m3;
    printf("Enter the marks in three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    (m1 >= 33 && m2 >= 33 && m3 >= 33) ? printf("You have passed the exam.\n") : printf("You have failed the exam.\n");
    return 0;
}