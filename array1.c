#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d", &a);

    int arr[a];

    arr[0] = 6;
    arr[3] =5;

    printf("%d\n", arr[3]);

    return 0;
}