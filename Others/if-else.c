#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Largest: ");
    
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    else if(b>c && b>a)
    {
        printf("%d",b);
    }
    else if(c>a && c>b)
    {
        printf("%d",c);
    }
    else if(a==b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else if(b==c)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else if(a==c)
    {
        if(a>b)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",b);
        }
    }
    return 0;
}

