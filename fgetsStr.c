#include<stdio.h>
#include<string.h>

char string_print(char s2[])
{

    puts(s2);

    return 'A';
}

int main()
{
    char str[6];
    char ret;

    fgets(str, 6, stdin);

    ret = string_print(str);

    if(ret == 'A')
        printf("You have received the ACK\n");

    return 0;
}