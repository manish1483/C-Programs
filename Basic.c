#include<stdio.h>

int main()
{
  int x=5; // declare an interger variable
  printf("X data is=%d\n", x);  //X data is = 5
  int y=7;
  printf("Y data is=%d\n", y); //Y data is = 7
  y=50;
  printf("Y data is=%d\n", y); //Y data is = 50

  printf("Address of X is=%u\n", &x); //print the address of variable x
  return 0;

}
