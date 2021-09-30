#include<iostream>
using namespace std;


signed main(void) {
    char *secret = "ziBbeqjAs+cu";
    unsigned long message = 10521325414783145265U;

    while (message) {
        putchar(secret[message & 15] - 33);
        message >>= 4;
    }
    return 0;
}