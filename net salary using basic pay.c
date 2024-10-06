#include<stdio.h>
int main ()
{
    float bp,bonus,ta,ns;
    printf("Enter your basic pay : ");
    scanf("%f",&bp);
    if(bp>=0&&bp<=10000)
    {
        bonus=bp*0.02;
        ta=bp*0.01;
    }
    else if (bp>=10001&&bp<=25000)
    {
        bonus=bp*0.05;
        ta=bp*0.02;
    }
    else if (bp>=25001&&bp<=50000)
    {
        bonus=bp*0.1;
        ta=bp*0.03;
    }
    else if (bp>=50001&&bp<=100000)
    {
        bonus=bp*0.15;
        ta=bp*0.04;
    }
    else if (bp>=100001)
    {
        bonus=bp*0.2;
        ta=bp*0.05;
    }
    else if(bp<0)
    {
        printf("invalid input");
    }
    ns=bp+bonus+ta;
    printf("your net salary is %.2f",ns);
}