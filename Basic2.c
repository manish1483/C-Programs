#include<stdio.h>
#include<stdbool.h>
//#include<conio.h>   //not available for vscode
extern int x;

int main()
{
    int age = 30;
    char name[] = "Embedded";
    float average = 66.78;
    char gender = 'M';
    bool result = true;

    printf("%d\n",x);
    printf("%d\n", age);
    printf("%s\n", name);
    printf("%f\n", average);
    printf("%c\n", gender);
    printf("%d\n", result);

    printf("size of int is = %u\n", sizeof(int));
    printf("size of char is=%u\n", sizeof(char));
    printf("size of float is=%u\n", sizeof(float));
    printf("size of bool is=%u\n", sizeof(bool));

    return 0;
  // getch();  //only used with conio.h header file to hold value on console
  //The getch() is a predefined non-standard function that is defined in conio. h header file. It is mostly used by the Dev C/C++, MS- DOS's compilers like Turbo C to hold the screen until the user passes a single value to exit from the console screen.
}

int x=5;