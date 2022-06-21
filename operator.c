#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of a and b");

    scanf("%d %d",&a,&b);
   // a = 10;
  //  b = 20;

    printf("addition of a and b is=%d\n",(a+b));
    printf("Subtraction of a from b is=%d\n",(b-a));
    printf("Multiplication of a and b is=%d\n",(a*b));
    printf("division of a and b is=%d\n",(b/a));
    printf("Modulo of a and b is=%d\n",(a%b));


    return 0;

}