#include <cstring>
#include <unistd.h>
#include <iostream>

using namespace std;

void slowPrint(unsigned long speed, const char *s) {
	int i = 0;
	while(s[i]!=0) {
		cout << s[i++];
		cout.flush();
		usleep(speed);
	}
}

int main() {
	slowPrint(200000, "HAPPY BIRTHDAY!");
	return 0;
}