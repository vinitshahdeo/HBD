#include <iostream>
#include <unistd.h>
#include <cstring>
using namespace std;

void slowPrint(unsigned long speed, const char *t) {
	int x = 0;
	while(t[x]!=0) {
		cout << t[x++];
		cout.flush();
		usleep(speed);
	}
}

int main() {
	slowPrint(100000, "HAPPY BIRTHDAY TO YOU!\n");
  slowPrint(5000, "MAY YOU HAVE A WONDERFUL DAY!!!!");
	return 0;
}
