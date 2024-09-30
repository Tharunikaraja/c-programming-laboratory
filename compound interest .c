#include <stdio.h>
int main ()
{
    float pa,r,t,amount,c,a,ci;
    printf("Enter principal amount : ");
    scanf("%f",&pa);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    c=(1+(r/100));
    int count=0;
    do
    {
        a=c*c;
        count++;
    }while(count<=t-1);
    amount=pa*a;
    ci=amount-pa;
    printf("compound interest is : %.3f",ci);
}