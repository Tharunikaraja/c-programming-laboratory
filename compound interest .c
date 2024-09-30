#include <stdio.h>
int main ()
{
    float pa,r,t,amount,c,a=1,ci;
    printf("Enter principal amount : ");
    scanf("%f",&pa);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    c=(1+(r/100));
    
    for(int i=1;i<=t;i++)
    {
        
        a=a*c;
    }
    amount=pa*a;
    ci=amount-pa;
    printf("compound interest is : %.3f",ci);
    return 0;
}
