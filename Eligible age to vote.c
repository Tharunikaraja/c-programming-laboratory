#include <stdio.h>

int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18&&age<=120)
    {
        printf("you are eligible to vote");
    }
else if(age<18&&age>=0)
{
    printf("you are not eligible to vote");
}
else
{
    printf("INVALID AGE");
}
    return 0;
}