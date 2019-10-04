/*
@author vinitshahdeo
*/
#include <stdio.h>
char *secret = "ziBbeqjAs+cu";
unsigned long message = 10521325414783145265U;
int main(void) {
    while (message) {
        putchar(secret[message & 15] - 33);
        message >>= 4;
    }
}
