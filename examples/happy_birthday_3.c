
#include<stdio.h>
int main()
{
    int arr[]={72,65,80,80,89,32,66,73,82,84,72,68,65,89,33};
    int i=0;
    char c;
    while(i<15)
    {
        c=(char)arr[i];
        printf("%c",c);
        i++;
    }
    return 0;
}
