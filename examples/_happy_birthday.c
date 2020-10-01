#include <stdio.h>

/**
 * @author Rohit Ashiwal
 */

/* our surprise! */
int secret[] = { 1886413128, 1765941369,
                 1684567154, 31073 };

int main(void) {
    int choice;
    scanf("%d", &choice);

    if (choice + 1000 > 0)
        puts("Bye! No cake for you :p");
    else
        puts((const char *)secret);
}
