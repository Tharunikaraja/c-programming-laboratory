#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first number  : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a<=b)
    {
        printf("%d is the smallest number",a);
    }
    else
    {
        printf("%d is the smallest number",b);
    }
    return 0;
}