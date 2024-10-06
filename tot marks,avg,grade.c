#include <stdio.h>

int main()
{
    int t,e,m,s,ss,total;
    printf("Enter Tamil marks          : ");
    scanf("%d",&t);
    printf("Enter English marks        : ");
    scanf("%d",&e);
    printf("Enter Maths marks          : ");
    scanf("%d",&m);
    printf("Enter Science marks        : ");
    scanf("%d",&s);
    printf("Enter Social Science marks : ");
    scanf("%d",&ss);
    total=t+e+m+s+ss;
    float avg;
    avg=total/5;
    printf("Your total                 : %d\n",total);
    printf("Your average               : %.2f\n",avg);
     if(avg>=91 && avg<=100)
    {
        printf("You got O grade");
    }
    else if(avg>=81 && avg<=90)
    {
        printf("You got A+ grade");
    }
    else if(avg>=71 && avg<=80)
    {
        printf("You got A grade");
    }
    else if(avg>=61 && avg<=70)
    {
        printf("You got B+ grade");
    }
    else if(avg>=50 && avg<=60)
    {
        printf("You got B grade");
    }
    else if(avg<=50 && avg>=0)
    {
        printf("You are Failed");
    }
    else
    {
        printf("You entered Invalid marks");
    }
    return 0;
}