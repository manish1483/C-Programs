#include<stdio.h>

int main()
{
    int a = 10;
    float b=10.2;
    float c;

    c = (a*(int)b);

    printf("c =%d\n", (int)c);

    c = a*b;
    printf("c =%f\n", c);

    c = a/4;
    printf("c =%f\n", c);

    c = (float)a/4;
    printf("c =%f\n", c);

    c= a/4.0;
    printf("c =%f\n", c);

    return 0;


}