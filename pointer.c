#include<stdio.h>

int main()
{
    int x=100;

    int *p;
    p = &x;

    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n", *p);
    printf("%d\n", *(&x));

    return 0;
}