#include <cstring>
#include <unistd.h>
#include <iostream>

using namespace std;

void slowPrint(unsigned long speed, const char *s) {
	int i = 0;
	while(s[i]!=0) {
		cout << s[i++];
		cout.flush();
		sleep(speed);
	}
}

int main() {
	slowPrint(1, "HAPPY BIRTHDAY!");
	return 0;
}
