#include <stdio.h>

int main()
{
    int number;
    printf("Enter The Number : ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("The Given Number is Even");
    }
    else
    {
        printf("The Given number is Odd");
    }
    return 0;
}