#include<stdio.h>
#include<stdbool.h>

bool swap_func(int a, int b)
{
    int temp;

    temp = b;
    b=a;
    a=b;

    return true;
}

int main()
{
    bool swapDone = swap_func(10, 20);

    printf("%d\n", swapDone);
    return 0;
}