#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first number  : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a==b)
    {
        printf("They are equal");
    }
    else
    {
        printf("They are not equal");
    }
    return 0;
}