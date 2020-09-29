#include <stdio.h>

int main() {
	char name[1000];
	
	printf("Hey friend!! What is your name? ");
	scanf("%[^\n]", name);
	
	printf("\n\nHappy birthday %s...\n", name);
	printf("Wish you all the best ^^\n", name);
}
