#include <stdio.h>

int main() {

    int tam,eng,sci,mat,social;
    printf("Enter marks in Tamil: ");
    scanf("%d", &tam);
    printf("Enter marks in English: ");
    scanf("%d", &eng);
    printf("Enter marks in Science: ");
    scanf("%d", &sci);
    printf("Enter marks in Maths: ");
    scanf("%d", &mat);
    printf("Enter marks in Social Science: ");
    scanf("%d", &social);
    if (tam>=0&&tam<=100&&eng>=0&&eng<=100&&sci>0&&sci<=100&& mat>=0&&mat<=100&&social>=0&&social<=100) 
    {
    
        if (tam>=50&&eng>=50&&sci>=50&&mat>=50&&social>=50) 
        {
            printf("You cleared the exam");
        } else {
            printf("You failed the exam");
        }
    } 
    else 
    {
        printf("Invalid marks");
    }

    return 0;
}




