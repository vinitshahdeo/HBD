#include <iostream>
#include <unistd.h>
#include <cstring>

using namespace std;

void PrtSlw(unsigned long textspd, const char *a) {
	int i = 0;
	while(a[i]!=0) {
		cout << a[i++];
		cout.flush();
		usleep(textspd);
	}
}

int main() {
	PrtSlw(100000, "Wishing you a day that's wrapped in sweet surprises!\n");
	PrtSlw(200000, "HaPpY BiRtHdAy!!!");	
	return 0;
} 
