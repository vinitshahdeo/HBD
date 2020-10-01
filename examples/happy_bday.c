#include <stdio.h>

int main(void)
{
    char name[64];
    printf("What is your name?\n");
    scanf("%s" , name);
    printf("Happy birthday, %s!\n", name);
}