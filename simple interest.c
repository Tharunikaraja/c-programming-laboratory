#include <stdio.h>
int main ()
{
    float p,r,t,si;
    printf("Enter principal amount : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest is : %.3f",si);
    return 0;
}
