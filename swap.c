#include<stdio.h>

int main()
{

    int a, b;
    printf("Enter value of a and b");

    scanf("%d %d", &a, &b);


   /*
    int c;  // temporary variable
    c= a;
    a=b;
    b=c;
   */

    printf("a and b before swap is = %d and %d\n", a , b);
    a= a+b;
    b=a-b;
    a=a-b;
    printf("a and b after swap is = %d and %d\n", a , b);



    return 0;

}