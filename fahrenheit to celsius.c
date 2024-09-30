#include <stdio.h>
int main(void) {
   float celsius,fahrenheit;
   scanf("%f",&fahrenheit);
   celsius=(fahrenheit-32)/1.8;
   printf("%.2f",celsius);
   return 0;
}
