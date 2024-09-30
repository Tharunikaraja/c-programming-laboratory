#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter n1 : ");
    scanf("%d",&a);
    printf("Enter n2 : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("n1 is: %d \n",a);
    printf("n2 is: %d ",b);
    return 0;
}