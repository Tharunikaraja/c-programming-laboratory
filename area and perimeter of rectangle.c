#include <stdio.h>
int main ()
{
    int l,b,area,pm;
    printf("Enter length : " );
    scanf("%d",&l);
    printf("Enter breath : " );
    scanf("%d",&b);
    area=l*b;
    pm=2*(l+b);
    printf("area of a rectangle         = %d\n",area);
    printf("perimeter of a rectangle is = %d",pm);
    
}