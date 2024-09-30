#include <stdio.h>
int main ()
{
int a;
printf("size of int          = %ld bytes\n",sizeof(a));
float b;
printf("size of float        = %ld bytes\n",sizeof(b));
char c;
printf("size of char         = %ld byte\n",sizeof(c));
double d;
printf("size of double       = %ld bytes\n",sizeof(d));
long long int e;
printf("size of longlongint  = %ld bytes\n",sizeof(e));
short int f;
printf("size of shortint     = %ld bytes\n",sizeof(f));
long int g;
printf("size of longint      = %ld bytes\n",sizeof(g));

}