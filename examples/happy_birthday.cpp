#include <iostream>
#include <unistd.h>
#include <cstring>

using namespace std;

void PrtSlw(unsigned long spd, const char *s) {
	int i = 0;
	while(s[i]!=0) {
		cout << s[i++];
		cout.flush();
		usleep(spd);
	}
}

int main() {
	PrtSlw(100000, "Wishing you a day that's wrapped in sweet surprises!\n");
	PrtSlw(200000, "HaPpY BiRtHdAy!!!");	
	return 0;
} 
