#include <stdio.h>

int main(void) {

  char name[50];

  printf("Please tell me your name: \n");
  scanf("%[^\n]", name);
  printf("Happy Birthday, %s!\n", name);

  return 0;
}
