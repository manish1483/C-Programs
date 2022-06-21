#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20]= "Hi it's me";
    char str2[5];

    strcpy(str2, str1);

    printf("%s", str2);

    return 0;
}