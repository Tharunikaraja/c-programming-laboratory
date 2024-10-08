#include <stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input");
    }
    else
    {
        a=3*n*(n+1)/2;
        printf("%d",a);
    }
    return 0;
}